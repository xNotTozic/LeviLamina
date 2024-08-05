#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerType.h"

class ContainerScreenContext {
public:
    // prevent constructor by default
    ContainerScreenContext& operator=(ContainerScreenContext const&);
    ContainerScreenContext(ContainerScreenContext const&);

public:
    // NOLINTBEGIN
    MCAPI ContainerScreenContext();

    MCAPI ContainerScreenContext(class Player& player, ::ContainerType, class BlockPos const& blockPos);

    MCAPI ContainerScreenContext(class Player& player, ::ContainerType, struct ActorUniqueID const& actorId);

    MCAPI class Player& getPlayer() const;

    MCAPI ::ContainerType getScreenContainerType() const;

    MCAPI class Actor* tryGetActor() const;

    MCAPI class BlockActor* tryGetBlockActor() const;

    MCAPI class BlockPos const* tryGetBlockActorPos() const;

    // NOLINTEND
};
