#pragma once
#include "CoreMinimal.h"
#include "HeightFogData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHeightFogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* pFogActor;
    
    GAMEPROJECT_API FHeightFogData();
};

