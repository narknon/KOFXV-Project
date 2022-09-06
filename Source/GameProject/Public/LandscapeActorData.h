#pragma once
#include "CoreMinimal.h"
#include "LandscapeActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLandscapeActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* pActor;
    
    GAMEPROJECT_API FLandscapeActorData();
};

