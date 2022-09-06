#pragma once
#include "CoreMinimal.h"
#include "GamePauseEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGamePauseEvent, bool, bPuase);

