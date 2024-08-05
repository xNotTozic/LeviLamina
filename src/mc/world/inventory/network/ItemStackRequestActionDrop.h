#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

class ItemStackRequestActionDrop : public ::ItemStackRequestActionTransferBase {
public:
    // prevent constructor by default
    ItemStackRequestActionDrop& operator=(ItemStackRequestActionDrop const&);
    ItemStackRequestActionDrop(ItemStackRequestActionDrop const&);
    ItemStackRequestActionDrop();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionDrop() = default;

    // vIndex: 4
    virtual void _write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
