#pragma once
#include "CoreMinimal.h"
#include "EEOSLoginMode.generated.h"

UENUM(BlueprintType)
enum class EEOSLoginMode : uint8 {
    IDPassword,
    ExchangeCode,
    DeviceCode,
    DevAuth,
    AccountPortal,
    PersistentAuth,
    ExternalAuth,
};

