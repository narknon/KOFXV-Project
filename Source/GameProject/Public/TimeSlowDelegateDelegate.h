#pragma once
#include "CoreMinimal.h"
#include "TimeSlowDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimeSlowDelegate, float, TimeDiliation);

