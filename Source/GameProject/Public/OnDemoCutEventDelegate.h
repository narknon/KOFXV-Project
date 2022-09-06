#pragma once
#include "CoreMinimal.h"
#include "OnDemoCutEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDemoCutEvent, int32, Cut);

