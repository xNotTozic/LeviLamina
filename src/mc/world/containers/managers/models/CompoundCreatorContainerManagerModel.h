#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class CompoundCreatorContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    CompoundCreatorContainerManagerModel& operator=(CompoundCreatorContainerManagerModel const&);
    CompoundCreatorContainerManagerModel(CompoundCreatorContainerManagerModel const&);
    CompoundCreatorContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundCreatorContainerManagerModel() = default;

    // vIndex: 6
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9
    virtual void setData(int id, int value);

    // vIndex: 10
    virtual void broadcastChanges();

    // vIndex: 16
    virtual bool isValid(float pickRange);

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI CompoundCreatorContainerManagerModel(
        ::ContainerID         containerId,
        class Player&         player,
        class BlockPos const& blockPos
    );

    // NOLINTEND
};
