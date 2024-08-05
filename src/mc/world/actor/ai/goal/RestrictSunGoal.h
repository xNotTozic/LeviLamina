#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RestrictSunGoal : public ::Goal {
public:
    // prevent constructor by default
    RestrictSunGoal& operator=(RestrictSunGoal const&);
    RestrictSunGoal(RestrictSunGoal const&);
    RestrictSunGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RestrictSunGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit RestrictSunGoal(class Mob& mob);

    // NOLINTEND
};
