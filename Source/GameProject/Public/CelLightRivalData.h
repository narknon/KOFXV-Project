#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "RivalLightSetting.h"
#include "CelLightRivalData.generated.h"

USTRUCT(BlueprintType)
struct FCelLightRivalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID charaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalLightSetting> LightData;
    
    GAMEPROJECT_API FCelLightRivalData();
};

