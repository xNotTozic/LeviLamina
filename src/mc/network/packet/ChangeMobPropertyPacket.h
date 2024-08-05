#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ChangeMobPropertyPacket : public ::Packet {
public:
    std::string   mPropName;           // this+0x30
    bool          mBoolComponentVal;   // this+0x50
    float         mFloatComponentVal;  // this+0x54
    int           mIntComponentVal;    // this+0x58
    std::string   mStringComponentVal; // this+0x60
    ActorUniqueID mActorId;            // this+0x80

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChangeMobPropertyPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ChangeMobPropertyPacket();

    // NOLINTEND
};
