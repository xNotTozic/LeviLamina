#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasPropertyTest : public ::FilterTest {
public:
    // prevent constructor by default
    ActorHasPropertyTest& operator=(ActorHasPropertyTest const&);
    ActorHasPropertyTest(ActorHasPropertyTest const&);
    ActorHasPropertyTest();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorHasPropertyTest();

    // vIndex: 1
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // vIndex: 6
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND
};
