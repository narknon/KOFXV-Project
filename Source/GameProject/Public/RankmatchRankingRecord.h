#pragma once
#include "CoreMinimal.h"
#include "TeamRankingRecord.h"
#include "RankmatchRankingRecord.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API URankmatchRankingRecord : public UTeamRankingRecord {
    GENERATED_BODY()
public:
    URankmatchRankingRecord();
};

