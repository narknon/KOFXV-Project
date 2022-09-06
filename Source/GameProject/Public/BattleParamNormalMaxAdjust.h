#pragma once
#include "CoreMinimal.h"
#include "BattleParamNormalMaxAdjust.generated.h"

USTRUCT(BlueprintType)
struct FBattleParamNormalMaxAdjust {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iGuardDamageScale;
    
    GAMEPROJECT_API FBattleParamNormalMaxAdjust();
};

