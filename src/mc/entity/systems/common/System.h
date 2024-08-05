#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlag;
struct CanStandOnSnowFlag;
struct CollidableMobFlag;
struct CollidableMobNearFlag;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FallingBlockFlag;
struct HasLightweightFamilyFlag;
struct HorseFlag;
struct LocalConstBlockSourceFactoryComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MaxAutoStepComponent;
struct MobBodyRotationComponent;
struct MobFlag;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct ParrotFlag;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponentFlag;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace MoveCollisionSystem {

struct System {
public:
    // System inner types declare
    // clang-format off
    class SpatialQueries;
    // clang-format on

    // System inner types define
    class SpatialQueries {
    public:
        // prevent constructor by default
        SpatialQueries& operator=(SpatialQueries const&);
        SpatialQueries(SpatialQueries const&);
        SpatialQueries();

    public:
        // NOLINTBEGIN
        MCAPI ~SpatialQueries();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    System& operator=(System const&);
    System(System const&);
    System();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~System() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct CanStandOnSnowFlag>,
                          class FlagComponent<struct HasLightweightFamilyFlag>,
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct MobFlag>,
                          class FlagComponent<struct ParrotFlag>,
                          struct VehicleComponent,
                          class FlagComponent<struct CamelFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct CollidableMobFlag>,
                          class FlagComponent<struct FallingBlockFlag>>,
                      struct Read<
                          struct AABBShapeComponent,
                          struct MovementAbilitiesComponent,
                          struct ActorTypeComponent,
                          struct FallDistanceComponent,
                          struct PassengerComponent,
                          struct ActorGameTypeComponent,
                          struct ActorDataFlagComponent,
                          struct VehicleComponent,
                          struct ActorRotationComponent,
                          struct MobBodyRotationComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct OffsetsComponent,
                          struct VanillaOffsetComponent,
                          struct PassengerRenderingRidingOffsetComponent,
                          struct DimensionTypeComponent,
                          struct MaxAutoStepComponent,
                          class FlagComponent<struct CollidableMobNearFlag>>,
                      struct Write<struct MoveRequestComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<
                          struct ExternalDataComponent,
                          struct LocalConstBlockSourceFactoryComponent,
                          struct LocalSpatialEntityFetcherFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // vIndex: 6
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct CollidableMobFlag>, class FlagComponent<struct FallingBlockFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct DimensionTypeComponent, struct MaxAutoStepComponent, class FlagComponent<struct CollidableMobNearFlag>>, struct Write<struct MoveRequestComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    MCAPI static auto createViews(class StrictExecutionContext<
                                  struct Filter<
                                      class FlagComponent<struct CanStandOnSnowFlag>,
                                      class FlagComponent<struct HasLightweightFamilyFlag>,
                                      class FlagComponent<struct HorseFlag>,
                                      class FlagComponent<struct MobFlag>,
                                      class FlagComponent<struct ParrotFlag>,
                                      struct VehicleComponent,
                                      class FlagComponent<struct CamelFlag>,
                                      class FlagComponent<struct PlayerComponentFlag>,
                                      class FlagComponent<struct CollidableMobFlag>,
                                      class FlagComponent<struct FallingBlockFlag>>,
                                  struct Read<
                                      struct AABBShapeComponent,
                                      struct MovementAbilitiesComponent,
                                      struct ActorTypeComponent,
                                      struct FallDistanceComponent,
                                      struct PassengerComponent,
                                      struct ActorGameTypeComponent,
                                      struct ActorDataFlagComponent,
                                      struct VehicleComponent,
                                      struct ActorRotationComponent,
                                      struct MobBodyRotationComponent,
                                      struct RenderRotationComponent,
                                      struct StandAnimationComponent,
                                      struct OffsetsComponent,
                                      struct VanillaOffsetComponent,
                                      struct PassengerRenderingRidingOffsetComponent,
                                      struct DimensionTypeComponent,
                                      struct MaxAutoStepComponent,
                                      class FlagComponent<struct CollidableMobNearFlag>>,
                                  struct Write<struct MoveRequestComponent>,
                                  struct AddRemove<>,
                                  struct GlobalRead<
                                      struct ExternalDataComponent,
                                      struct LocalConstBlockSourceFactoryComponent,
                                      struct LocalSpatialEntityFetcherFactoryComponent>,
                                  struct GlobalWrite<>,
                                  struct EntityFactoryT<>>&);

    // NOLINTEND
};

}; // namespace MoveCollisionSystem
