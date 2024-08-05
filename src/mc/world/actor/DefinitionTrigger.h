#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/FilterSubject.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DefinitionTrigger {
public:
    // prevent constructor by default
    DefinitionTrigger(DefinitionTrigger const&);
    DefinitionTrigger();

public:
    // NOLINTBEGIN
    MCAPI DefinitionTrigger(std::string, ::Puv::Legacy::FilterSubject, class ExpressionNode);

    MCAPI bool canTrigger(class RenderParams& params) const;

    MCAPI class DefinitionTrigger& operator=(class DefinitionTrigger&&);

    MCAPI class DefinitionTrigger& operator=(class DefinitionTrigger const&);

    MCAPI ~DefinitionTrigger();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
