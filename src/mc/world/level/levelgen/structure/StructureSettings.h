#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/AnimationMode.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/enums/AnimationMode.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"

class StructureSettings {
public:
    std::string   mPaletteName;                               // this+0x0
    bool          mIgnoreEntities;                            // this+0x20
    bool          mReloadActorEquipment;                      // this+0x21
    bool          mIgnoreBlocks;                              // this+0x22
    bool          mIsWaterLogged;                             // this+0x23
    bool          mIgnoreJigsawBlocks;                        // this+0x24
    bool          mAllowNonTickingPlayerAndTickingAreaChunks; // this+0x25
    BlockPos      mStructureSize;                             // this+0x28
    BlockPos      mStructureOffset;                           // this+0x34
    Vec3          mPivot;                                     // this+0x40
    ActorUniqueID mLastTouchedByPlayer;                       // this+0x50
    Rotation      mRotation;                                  // this+0x58
    Mirror        mMirror;                                    // this+0x59
    AnimationMode mAnimationMode;                             // this+0x5A
    float         mAnimationSeconds;                          // this+0x5C
    float         mIntegrityValue;                            // this+0x60
    uint          mIntegritySeed;                             // this+0x64

    [[nodiscard]] inline StructureSettings(BlockPos const& size, bool ignoreBlocks, bool ignoreEntities)
    : StructureSettings() {
        setIgnoreBlocks(ignoreBlocks);
        setIgnoreEntities(ignoreEntities);
        setStructureSize(size);
        setStructureOffset({0});
        setAllowNonTickingPlayerAndTickingAreaChunks(true);
        mIsWaterLogged = true;
    };

public:
    // prevent constructor by default
    StructureSettings(StructureSettings const&);

public:
    // NOLINTBEGIN
    MCAPI StructureSettings();

    MCAPI StructureSettings(class StructureSettings&&);

    MCAPI ::AnimationMode getAnimationMode() const;

    MCAPI float getAnimationSeconds() const;

    MCAPI uint getAnimationTicks() const;

    MCAPI bool getIgnoreBlocks() const;

    MCAPI bool getIgnoreEntities() const;

    MCAPI uint getIntegritySeed() const;

    MCAPI float getIntegrityValue() const;

    MCAPI bool getIsWaterLogged() const;

    MCAPI ::Mirror getMirror() const;

    MCAPI class Vec3 const& getPivot() const;

    MCAPI ::Rotation getRotation() const;

    MCAPI class BlockPos const& getStructureOffset() const;

    MCAPI class BlockPos const& getStructureSize() const;

    MCAPI bool isAnimated() const;

    MCAPI class StructureSettings& operator=(class StructureSettings&&);

    MCAPI class StructureSettings& operator=(class StructureSettings const&);

    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool allowNonPlayerTicking);

    MCAPI void setAnimationMode(::AnimationMode);

    MCAPI void setAnimationSeconds(float seconds);

    MCAPI void setAnimationTicks(uint ticks);

    MCAPI void setIgnoreBlocks(bool ignoreBlocks);

    MCAPI void setIgnoreEntities(bool ignoreEntities);

    MCAPI void setIgnoreJigsawBlocks(bool ignoreJigsawBlocks);

    MCAPI void setIntegritySeed(uint integritySeed);

    MCAPI void setIntegrityValue(float integrityValue);

    MCAPI void setIsWaterLogged(bool);

    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID lastTouchedByPlayerID);

    MCAPI void setMirror(::Mirror mirror);

    MCAPI void setPivotFromStructureSize();

    MCAPI void setReloadActorEquipment(bool);

    MCAPI void setRotation(::Rotation rotation);

    MCAPI void setStructureOffset(class BlockPos const& offset);

    MCAPI void setStructureSize(class BlockPos const& size);

    MCAPI bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;

    MCAPI ~StructureSettings();

    MCAPI static class BlockPos const DEFAULT_STRUCTURE_OFFSET;

    MCAPI static class BlockPos const DEFAULT_STRUCTURE_SIZE;

    // NOLINTEND
};
