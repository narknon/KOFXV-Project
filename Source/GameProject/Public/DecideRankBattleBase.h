#pragma once
#include "CoreMinimal.h"
#include "ERankGrade.h"
#include "DecideRankBattleBase.generated.h"

USTRUCT(BlueprintType)
struct FDecideRankBattleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERankGrade Rank;
    
    GAMEPROJECT_API FDecideRankBattleBase();
};

