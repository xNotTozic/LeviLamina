#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SimpleMutex {
public:
    // prevent constructor by default
    SimpleMutex& operator=(SimpleMutex const&);
    SimpleMutex(SimpleMutex const&);

public:
    // NOLINTBEGIN
    MCAPI void Lock();

    MCAPI SimpleMutex();

    MCAPI void Unlock();

    MCAPI ~SimpleMutex();

    // NOLINTEND
};

}; // namespace RakNet
