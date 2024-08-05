#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleHashStringFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsFamilyTest : public ::SimpleHashStringFilterTest {
public:
    // prevent constructor by default
    ActorIsFamilyTest& operator=(ActorIsFamilyTest const&);
    ActorIsFamilyTest(ActorIsFamilyTest const&);
    ActorIsFamilyTest();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorIsFamilyTest();

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // NOLINTEND
};
