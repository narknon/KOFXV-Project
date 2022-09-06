#pragma once
#include "CoreMinimal.h"
#include "EFlagDataType.h"
#include "DebugFlagData.generated.h"

USTRUCT(BlueprintType)
struct FDebugFlagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlagDataType DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    GAMEPROJECT_API FDebugFlagData();
};

