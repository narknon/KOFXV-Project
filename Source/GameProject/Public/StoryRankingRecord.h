#pragma once
#include "CoreMinimal.h"
#include "TeamRankingRecord.h"
#include "StoryRankingRecord.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UStoryRankingRecord : public UTeamRankingRecord {
    GENERATED_BODY()
public:
    UStoryRankingRecord();
};

