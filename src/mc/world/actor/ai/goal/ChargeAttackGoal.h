#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ChargeAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    ChargeAttackGoal& operator=(ChargeAttackGoal const&);
    ChargeAttackGoal(ChargeAttackGoal const&);
    ChargeAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChargeAttackGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit ChargeAttackGoal(class Mob& pathMob);

    // NOLINTEND
};
