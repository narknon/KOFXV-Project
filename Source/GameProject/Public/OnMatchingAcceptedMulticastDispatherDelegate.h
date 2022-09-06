#pragma once
#include "CoreMinimal.h"
#include "OnMatchingAcceptedMulticastDispatherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchingAcceptedMulticastDispather, bool, bEveryonAccepted);

