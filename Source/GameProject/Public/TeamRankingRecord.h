#pragma once
#include "CoreMinimal.h"
#include "RankingRecord.h"
#include "TeamRankingRecord.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UTeamRankingRecord : public URankingRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChrIndex1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChrIndex2;
    
    UTeamRankingRecord();
};

