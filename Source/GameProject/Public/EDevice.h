#pragma once
#include "CoreMinimal.h"
#include "EDevice.generated.h"

UENUM(BlueprintType)
enum class EDevice : uint8 {
    DeviceNotSet,
    PS4Base,
    PS4Pro,
    PS5,
    XB1Base,
    XB1S,
    XB1Scorpio,
    XBSeries,
    XBSeriesX,
    XBSeriesS,
    Windows,
    Switch,
};

