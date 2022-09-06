#pragma once
#include "CoreMinimal.h"
#include "EUiOperation.h"
#include "OperationalWidgetStepDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOperationalWidgetStep, int32, PlayerID, EUiOperation, Operation);

