#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"

namespace ScriptModuleMinecraft {

class ScriptTickSignal {
public:
    // ScriptTickSignal inner types declare
    // clang-format off
    struct PendingSubscribe;
    struct PendingUnsubscribe;
    struct Slot;
    // clang-format on

    // ScriptTickSignal inner types define
    struct PendingSubscribe {
    public:
        // prevent constructor by default
        PendingSubscribe& operator=(PendingSubscribe const&);
        PendingSubscribe(PendingSubscribe const&);
        PendingSubscribe();

    public:
        // NOLINTBEGIN
        MCAPI ~PendingSubscribe();

        // NOLINTEND
    };

    struct PendingUnsubscribe {
    public:
        // prevent constructor by default
        PendingUnsubscribe& operator=(PendingUnsubscribe const&);
        PendingUnsubscribe(PendingUnsubscribe const&);
        PendingUnsubscribe();
    };

    struct Slot {
    public:
        // prevent constructor by default
        Slot& operator=(Slot const&);
        Slot(Slot const&);
        Slot();

    public:
        // NOLINTBEGIN
        MCAPI Slot(struct ScriptModuleMinecraft::ScriptTickSignal::Slot&&);

        MCAPI ~Slot();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptTickSignal& operator=(ScriptTickSignal const&);
    ScriptTickSignal(ScriptTickSignal const&);
    ScriptTickSignal();

public:
    // NOLINTBEGIN
    MCAPI uint scheduleInterval(class Scripting::Closure<void()>&&, uint interval, uint currentTick);

    MCAPI uint scheduleTimeout(class Scripting::Closure<void()>&&, uint delay, uint currentTick);

    MCAPI uint scheduleTimeout(std::function<void()>, uint, uint);

    MCAPI uint scheduleTimeoutSafe(class Scripting::Closure<void()>&&, uint currentTick);

    MCAPI void unschedule(uint id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _processActive(std::vector<struct ScriptModuleMinecraft::ScriptTickSignal::Slot>& slots, uint currentTick);

    MCAPI void
    _processPending(std::vector<std::variant<struct ScriptModuleMinecraft::ScriptTickSignal::PendingSubscribe, struct ScriptModuleMinecraft::ScriptTickSignal::PendingUnsubscribe>>&, std::vector<struct ScriptModuleMinecraft::ScriptTickSignal::Slot>&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
