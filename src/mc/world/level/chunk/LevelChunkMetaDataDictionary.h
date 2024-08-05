#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkMetaDataDictionary {
public:
    // prevent constructor by default
    LevelChunkMetaDataDictionary& operator=(LevelChunkMetaDataDictionary const&);
    LevelChunkMetaDataDictionary(LevelChunkMetaDataDictionary const&);
    LevelChunkMetaDataDictionary();

public:
    // NOLINTBEGIN
    MCAPI void checkAndSerialize(std::function<void(std::string const&)>) const;

    MCAPI void deserialize(class IDataInput& stream);

    MCAPI std::shared_ptr<class LevelChunkMetaData const> getMetaData(uint64) const;

    MCAPI std::shared_ptr<class LevelChunkMetaData> registerMetaData(class LevelChunkMetaData const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class LevelChunkMetaData> _registerMetaData(class LevelChunkMetaData const&);

    // NOLINTEND
};
