#pragma once
#include "CoreMinimal.h"
#include "BackgroundFXData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBackgroundFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> pEffekseerFXActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> pUEFXActors;
    
    GAMEPROJECT_API FBackgroundFXData();
};

