#pragma once
#include "CoreMinimal.h"
#include "DebugSettingValue.h"
#include "DebugSettingInfo.generated.h"

USTRUCT(BlueprintType)
struct FDebugSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugSettingValue> valueList;
    
    GAMEPROJECT_API FDebugSettingInfo();
};

