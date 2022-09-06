#pragma once
#include "CoreMinimal.h"
#include "EDeviceType.h"
#include "DeviceData.generated.h"

USTRUCT(BlueprintType)
struct FDeviceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeviceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeviceType DeviceType;
    
    INPUTSYSTEM_API FDeviceData();
};

