#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerFogPacket : public ::Packet {
public:
    std::vector<std::string> mFogStack; // this+0x30

    // prevent constructor by default
    PlayerFogPacket& operator=(PlayerFogPacket const&);
    PlayerFogPacket(PlayerFogPacket const&);
    PlayerFogPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerFogPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI explicit PlayerFogPacket(std::vector<std::string> fogStack);

    // NOLINTEND
};
