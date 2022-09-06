#pragma once
#include "CoreMinimal.h"
#include "SkyLightData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSkyLightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* pSkyLightActor;
    
    GAMEPROJECT_API FSkyLightData();
};

