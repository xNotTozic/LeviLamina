#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorAnimationType.h"
#include "mc/enums/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"

class ActorAnimationControllerStatePlayer : public ::ActorAnimationPlayer {
public:
    // prevent constructor by default
    ActorAnimationControllerStatePlayer& operator=(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const&);
    ActorAnimationControllerStatePlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorAnimationControllerStatePlayer() = default;

    // vIndex: 1
    virtual void applyToPose(
        class RenderParams&                                                               renderParams,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    );

    // vIndex: 2
    virtual void resetAnimation();

    // vIndex: 4
    virtual void bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const&);

    // vIndex: 5
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const& actorSoundEffectMap);

    // vIndex: 6
    virtual bool hasAnimationFinished() const;

    // vIndex: 7
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const& friendlyName);

    // vIndex: 8
    virtual ::ActorAnimationType getAnimationType() const;

    // vIndex: 9
    virtual class HashedString const& getRawName() const;

    MCAPI ActorAnimationControllerStatePlayer(class HashedString const& friendlyName, class ActorAnimationControllerPlayer& owner, std::shared_ptr<class ActorAnimationControllerState> animationControllerState, class AnimationComponent& animationComponent, class ExpressionNode const& blendExpression, std::set<class HashedString, std::hash<class HashedString>>&);

    MCAPI bool allAnimationsFinished() const;

    MCAPI bool anyAnimationsFinished() const;

    MCAPI float getStateTime() const;

    // NOLINTEND
};
