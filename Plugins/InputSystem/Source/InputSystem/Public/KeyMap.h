#pragma once
#include "CoreMinimal.h"
#include "EFightingConfigKey.h"
#include "EKeyOperation.h"
#include "KeyMap.generated.h"

USTRUCT(BlueprintType)
struct INPUTSYSTEM_API FKeyMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFightingConfigKey, EKeyOperation> GamepadKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFightingConfigKey, EKeyOperation> KeyboardKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFightingConfigKey, EKeyOperation> CustomKeyMap;
    
    FKeyMap();
};

