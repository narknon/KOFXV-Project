#pragma once
#include "CoreMinimal.h"
#include "GameSpeedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameSpeedEvent, int32, Spead);

