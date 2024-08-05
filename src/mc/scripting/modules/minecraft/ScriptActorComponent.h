#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponent; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // prevent constructor by default
    ScriptActorComponent& operator=(ScriptActorComponent const&);
    ScriptActorComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptActorComponent();

    MCAPI ScriptActorComponent(class ScriptModuleMinecraft::ScriptActorComponent const&);

    MCAPI ScriptActorComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& context,
        std::string const&                        id
    );

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> getEntity() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorComponent> bind();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorComponent> bindV010();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI struct Scripting::Error _functionError(std::string_view) const;

    MCAPI class Actor* _tryGetOwner() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
