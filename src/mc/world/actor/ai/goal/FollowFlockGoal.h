#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FollowFlockGoal : public ::Goal {
public:
    // prevent constructor by default
    FollowFlockGoal& operator=(FollowFlockGoal const&);
    FollowFlockGoal(FollowFlockGoal const&);
    FollowFlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FollowFlockGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 3
    virtual bool canBeInterrupted();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI FollowFlockGoal(class Mob& mob, float speed);

    // NOLINTEND
};
