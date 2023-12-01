#include "ll/api/base/ErrorInfo.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/filesystem/FileActionEvent.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/schedule/Scheduler.h"
#include "ll/core/LeviLamina.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "ll/api/event/command/ExecuteCommandEvent.h"
#include "ll/api/event/player/PlayerAddExperienceEvent.h"
#include "ll/api/event/player/PlayerAttackEvent.h"
#include "ll/api/event/player/PlayerAttackedEvent.h"
#include "ll/api/event/player/PlayerConnectEvent.h"
#include "ll/api/event/player/PlayerDieEvent.h"
#include "ll/api/event/player/PlayerJoinEvent.h"
#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/player/PlayerLeaveEvent.h"
#include "ll/api/event/player/PlayerRespawnEvent.h"
#include "mc/codebuilder/MCRESULT.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/actor/ActorDamageSource.h"


#include "ll/api/base/FixedString.h"

class TestEventB : public ll::event::Event {
protected:
    TestEventB() = default;

public:
    std::string some       = "hello world";
    ~TestEventB() override = default;
};

class TestEvent1 : public TestEventB {
public:
    static constexpr ll::event::EventId CustomEventId{"My custom Id"};

    TestEvent1() { some = "TestEvent1 haha"; }
};

class TestEvent2 : public ll::event::Cancellable<TestEventB> {
public:
    TestEvent2() { some = "TestEvent2 haha"; }
    explicit TestEvent2(std::string_view v) { some.assign(v); }
};

class TestEvent3 : public ll::event::Event {
public:
};

using namespace ll::schedule;
using namespace ll::chrono_literals;

SystemTimeScheduler remover;

LL_AUTO_TYPED_INSTANCE_HOOK(
    EventTestH,
    ll::memory::HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);

    auto& bus = ll::event::EventBus::getInstance();

    static std::atomic_uint times{};

    auto listener = ll::event::Listener<TestEventB>::create([](TestEventB& ev) {
        ll::logger.debug("I'm 1, receive: {}, str: {}, {}", typeid(ev).name(), ev.some, times++);
    });
    bus.addListener<TestEvent1>(listener);
    bus.addListener<TestEvent2>(listener);

    auto listener2 = ll::event::Listener<TestEvent2>::create(
        [](TestEvent2& ev) {
            ll::logger.debug("I'm 2, receive: {}, str: {}, {}", typeid(ev).name(), ev.some, times++);

            ll::logger.debug("I'm 2, this can cancel, now isCancelled: {}", ev.isCancelled());
            ll::logger.debug("try cancel");
            ev.cancel();
            ll::logger.debug("I'm 2, this can cancel, now isCancelled: {}", ev.isCancelled());

            if (times.load() == 5) {
                throw std::runtime_error("hello");
            }
        },
        ll::event::EventPriority::High
    );

    ll::logger.debug("I'm 1 myid: {}", listener->getId());
    ll::logger.debug("I'm 2 myid: {}", listener2->getId());

    ll::logger.debug("eventid: {}", ll::event::getEventId<TestEvent1>.name);
    ll::logger.debug("eventid: {}", ll::event::getEventId<TestEvent2>.name);

    bus.publish(TestEvent1{});
    TestEvent2 e2{"I'm reused TestEvent2......"};
    bus.publish(e2);

    bus.removeListener<TestEvent2>(listener);

    ll::logger.debug("remove 1, 2");

    ll::logger.debug("repeat add, res: {}", bus.addListener<TestEvent2>(listener2));

    bus.publish(TestEvent1{});
    bus.publish(TestEvent2{});
    bus.publish(e2);

    using namespace ll::event;

    auto str = ll::toFixedString<ll::reflection::type_raw_name_v<fs::FileActionEvent>>();

    ll::logger.debug("{}", str.buf);

    auto listener4 = Listener<fs::FileActionEvent>::create("./", [](fs::FileActionEvent& ev) {
        ll::logger.debug("dyn receive: {}, {} {}", typeid(ev).name(), ev.path, magic_enum::enum_name(ev.type));
    });
    bus.addListener(listener4);

    remover.add<DelayTask>(2min, [=, &bus] { bus.removeListener(listener4); });

    bus.emplaceListener<command::ExecutingCommandEvent>([](command::ExecutingCommandEvent& ev) {
        ll::logger.debug("ExecutingCommandEvent: {}", ev.commandContext.mCommand);
        ll::logger.debug("origin: {}", ev.commandContext.mOrigin->serialize().toSnbt());
    });
    bus.emplaceListener<command::ExecutedCommandEvent>([](command::ExecutedCommandEvent& ev) {
        ll::logger.debug("ExecutedCommandEvent: {}", ev.commandContext.mCommand);
        ll::logger.debug("result: {}", ev.result.getFullCode());
    });
    bus.emplaceListener<player::PlayerConnectEvent>([](player::PlayerConnectEvent& ev) {
        ll::logger.debug("Player connect: {} {}", ev.player.getRealName(), ev.player.getIPAndPort());
    });
    bus.emplaceListener<player::PlayerJoinEvent>([](player::PlayerJoinEvent& ev) {
        ll::logger.debug("Player join: {}", ev.player.getRealName());
    });
    bus.emplaceListener<player::PlayerLeaveEvent>([](player::PlayerLeaveEvent& ev) {
        ll::logger.debug("Player leave: {}", ev.player.getRealName());
    });
    bus.emplaceListener<player::PlayerAttackEvent>([](player::PlayerAttackEvent& ev) {
        ll::logger
            .debug("Player {} attack {} cause {}", ev.source.getRealName(), ev.target.getTypeName(), (int)ev.cause);
    });
    bus.emplaceListener<player::PlayerAttackedEvent>([](player::PlayerAttackedEvent& ev) {
        ll::logger
            .debug("Player {} attacked {} damage {}", ev.source.getRealName(), ev.target.getTypeName(), ev.damage);
    });
    bus.emplaceListener<player::PlayerDieEvent>([](player::PlayerDieEvent& ev) {
        ll::logger.debug("Player {} died source {}", ev.player.getRealName(), (int)ev.source.getCause());
    });
    bus.emplaceListener<player::PlayerRespawnEvent>([](player::PlayerRespawnEvent& ev) {
        ll::logger.debug("Player {} respawned", ev.player.getRealName());
    });
    bus.emplaceListener<player::PlayerJumpEvent>([](player::PlayerJumpEvent& ev) {
        ll::logger.debug("Player {} jumped", ev.player.getRealName());
    });
    bus.emplaceListener<player::PlayerAddExperienceEvent>([](player::PlayerAddExperienceEvent& ev) {
        ll::logger.debug("Player {} add experience {}", ev.player.getRealName(), ev.exp);
        if (ev.exp == 114514) {
            ev.cancel();
        }
    });
}