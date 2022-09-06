#pragma once
#include "CoreMinimal.h"
#include "EGameInstanceTaskRequestType.h"
#include "EGameInstanceTaskOverlapType.h"
#include "GameInstanceGameParametersTaskData.generated.h"

USTRUCT(BlueprintType)
struct FGameInstanceGameParametersTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameInstanceTaskRequestType TaskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameInstanceTaskOverlapType OverlapType;
    
    GAMEPROJECT_API FGameInstanceGameParametersTaskData();
};

