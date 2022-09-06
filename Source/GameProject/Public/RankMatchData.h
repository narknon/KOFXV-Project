#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "RankMatchData.generated.h"

USTRUCT(BlueprintType)
struct FRankMatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, int32> PlayCharaNumList;
    
    GAMEPROJECT_API FRankMatchData();
};

