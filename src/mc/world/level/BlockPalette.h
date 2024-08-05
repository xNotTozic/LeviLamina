#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"

class BlockPalette {
public:
    // BlockPalette inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockPalette inner types define
    enum class PaletteType : int {
        Sequential = 0x0,
        Hashed     = 0x1,
    };

    struct ConstructorToken {
    public:
        // prevent constructor by default
        ConstructorToken& operator=(ConstructorToken const&);
        ConstructorToken(ConstructorToken const&);
        ConstructorToken();
    };

    std::mutex                                      mLegacyBlockStatesConversionWarningMutex;
    std::set<std::pair<int, int>>                   mLegacyBlockStatesConversionWarningSet;
    std::map<std::string, class BlockLegacy const*> mNameLookup;
    std::vector<class Block const*>                 mBlockFromNetworkId;
    class Level*                                    mLevel;

public:
    // prevent constructor by default
    BlockPalette& operator=(BlockPalette const&);
    BlockPalette(BlockPalette const&);
    BlockPalette();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPalette();

    // vIndex: 1
    virtual ::BlockPalette::PaletteType getPaletteType();

    // vIndex: 2
    virtual void appendBlock(class Block const& blockState);

    // vIndex: 3
    virtual class Block const& getBlock(uint const&) const;

    // vIndex: 4
    virtual void assignBlockNetworkId(class Block const& block, uint64) const;

    MCAPI explicit BlockPalette(class Level& level);

    MCAPI explicit BlockPalette(struct BlockPalette::ConstructorToken);

    MCAPI void cacheBlockComponentData();

    MCAPI class Block const& getBlockFromLegacyData(struct NewBlockID id, uint data) const;

    MCAPI class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> const getUnknownBlockTypeRegistry() const;

    MCAPI void initFromBlockDefinitions();

    MCAPI class Block const& switchBlock(class Block const& oldBlock, class BlockLegacy const& newBlockType) const;

    MCAPI static class Block const& convertLegacyBlock(struct BlockID, ushort);

    MCAPI static bool convertLegacyBlocks(
        class buffer_span_mut<class Block const*>,
        class buffer_span<struct BlockID>,
        class buffer_span<struct NibblePair>,
        uint64
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool shouldWarnFor(struct NewBlockID id, ushort data) const;

    // NOLINTEND
};
