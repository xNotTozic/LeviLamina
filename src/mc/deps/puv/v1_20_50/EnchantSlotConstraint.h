#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace Puv::v1_20_50 {

class EnchantSlotConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    EnchantSlotConstraint& operator=(EnchantSlotConstraint const&);
    EnchantSlotConstraint(EnchantSlotConstraint const&);
    EnchantSlotConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1
    virtual ~EnchantSlotConstraint() = default;

    // vIndex: 2
    virtual struct cereal::internal::ConstraintDescription description() const;

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
