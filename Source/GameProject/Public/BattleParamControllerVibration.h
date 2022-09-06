#pragma once
#include "CoreMinimal.h"
#include "BattleParamControllerVibration.generated.h"

USTRUCT(BlueprintType)
struct FBattleParamControllerVibration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 motorIntensityLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 motorIntensitySmall;
    
    GAMEPROJECT_API FBattleParamControllerVibration();
};

