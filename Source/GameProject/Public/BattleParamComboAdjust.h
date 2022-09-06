#pragma once
#include "CoreMinimal.h"
#include "BattleParamComboAdjust.generated.h"

USTRUCT(BlueprintType)
struct FBattleParamComboAdjust {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iComboAdjustRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iComboAdjustRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iSuperComboAdjustRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iCounterHitRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iSansCulotteComboAdjust;
    
    GAMEPROJECT_API FBattleParamComboAdjust();
};

