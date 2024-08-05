#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class HurtByTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    HurtByTargetGoal& operator=(HurtByTargetGoal const&);
    HurtByTargetGoal(HurtByTargetGoal const&);
    HurtByTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HurtByTargetGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual void alertOther(class Mob* other, class Mob* hurtByMob);

    MCAPI HurtByTargetGoal(class Mob& mob, std::vector<struct MobDescriptor> const& targetTypes, bool hurtOwner);

    // NOLINTEND
};
