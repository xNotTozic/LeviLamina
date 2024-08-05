#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PackType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/resources/PackType.h"

class ResourcePackDataInfoPacket : public ::Packet {
public:
    std::string mResourceName; // this+0x30
    uint        mChunkSize;    // this+0x50
    int         mNbChunks;     // this+0x54
    uint64      mFileSize;     // this+0x58
    std::string mFileHash;     // this+0x60
    PackType    mPackType;     // this+0x80
    bool        mIsPremium;    // this+0x81

    // prevent constructor by default
    ResourcePackDataInfoPacket& operator=(ResourcePackDataInfoPacket const&);
    ResourcePackDataInfoPacket(ResourcePackDataInfoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackDataInfoPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ResourcePackDataInfoPacket();

    MCAPI ResourcePackDataInfoPacket(
        std::string const& name,
        uint               chunkSize,
        int                nbChunk,
        uint64             fileSize,
        std::string const& fileHash,
        bool               isPremium,
        ::PackType         packType
    );

    // NOLINTEND
};
