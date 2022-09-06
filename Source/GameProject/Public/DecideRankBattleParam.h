#pragma once
#include "CoreMinimal.h"
#include "DecideRankBattleParam.generated.h"

USTRUCT(BlueprintType)
struct FDecideRankBattleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartVital;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Time;
    
    GAMEPROJECT_API FDecideRankBattleParam();
};

