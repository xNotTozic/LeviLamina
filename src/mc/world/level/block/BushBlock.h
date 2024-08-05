#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BushBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BushBlock& operator=(BushBlock const&);
    BushBlock(BushBlock const&);
    BushBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BushBlock();

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163
    virtual void checkAlive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 164
    virtual class Block const& setGrowth(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    baseBlock,
        ushort,
        int updateFlags
    ) const;

    MCAPI BushBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI bool growCrops(class BlockSource& region, class BlockPos const& pos, ::FertilizerType fType) const;

    MCAPI static class Vec3 const BUSH_VISUAL_SHAPE_MAX;

    MCAPI static class Vec3 const BUSH_VISUAL_SHAPE_MIN;

    // NOLINTEND
};
