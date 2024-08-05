#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"
#include "mc/events/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RecordItemComponent {
public:
    // prevent constructor by default
    RecordItemComponent& operator=(RecordItemComponent const&);
    RecordItemComponent(RecordItemComponent const&);
    RecordItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RecordItemComponent() = default;

    // vIndex: 1
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2
    virtual void writeSettings();

    // vIndex: 3
    virtual bool isNetworkComponent() const;

    // vIndex: 4
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI RecordItemComponent(::Puv::Legacy::LevelSoundEvent, float, int);

    MCAPI void appendFormattedHovertext(std::string& hovertext) const;

    MCAPI int getComparatorSignal() const;

    MCAPI float getDuration() const;

    MCAPI std::string getRecordDescription() const;

    MCAPI ::Puv::Legacy::LevelSoundEvent getSound() const;

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    MCAPI static class HashedString const& getIdentifier();

    MCAPI static std::string getRecordNameNoPrefix(::Puv::Legacy::LevelSoundEvent);

    // NOLINTEND
};
