#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/BlockUpdateFlag.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateBlockPacket : public ::Packet {
public:
    enum class BlockLayer : uint {
        Standard = 0,
        Extra    = 1,
        Count    = 2,
    };

    static const bool          SHARE_WITH_HANDLER = true; // constant
    class NetworkBlockPosition mPos;                      // this+0x30
    BlockLayer                 mLayer;                    // this+0x3C
    BlockUpdateFlag            mUpdateFlags;              // this+0x40
    uint                       mRuntimeId;                // this+0x44

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateBlockPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateBlockPacket();

    MCAPI UpdateBlockPacket(class BlockPos const& pos, uint layer, uint runtimeId, uchar updateFlags);

    // NOLINTEND
};
