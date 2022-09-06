#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CelLightRivalData.h"
#include "CelLightSetting.h"
#include "CelLightCPUData.h"
#include "EStageID.h"
#include "CelLightData.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UCelLightData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCelLightRivalData> RivalCPUData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCelLightSetting> ClimaxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCelLightCPUData> CpuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCelLightSetting> ResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCelLightSetting> CommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageID> UseFaceLight;
    
    UCelLightData();
};

