#pragma once
#include "CoreMinimal.h"
#include "BackgroundMeshData.h"
#include "BackgroundActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBackgroundActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* pActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackgroundMeshData> BackgroundMeshData;
    
    GAMEPROJECT_API FBackgroundActorData();
};

