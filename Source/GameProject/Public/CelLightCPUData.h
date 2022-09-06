#pragma once
#include "CoreMinimal.h"
#include "EStageID.h"
#include "CelLightSetting.h"
#include "CelLightCPUData.generated.h"

USTRUCT(BlueprintType)
struct FCelLightCPUData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageID stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCelLightSetting> LightData;
    
    GAMEPROJECT_API FCelLightCPUData();
};

