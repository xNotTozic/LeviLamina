#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ScriptMessagePacket : public ::Packet {
public:
    std::string mMessageId;    // this+0x30
    std::string mMessageValue; // this+0x50

    // prevent constructor by default
    ScriptMessagePacket& operator=(ScriptMessagePacket const&);
    ScriptMessagePacket(ScriptMessagePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMessagePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ScriptMessagePacket();

    MCAPI ScriptMessagePacket(std::string const& messageId, std::string const&);

    MCAPI std::string const& getMessageId() const;

    MCAPI std::string const& getMessageValue() const;

    // NOLINTEND
};
