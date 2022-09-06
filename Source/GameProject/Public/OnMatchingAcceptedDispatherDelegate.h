#pragma once
#include "CoreMinimal.h"
#include "OnMatchingAcceptedDispatherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnMatchingAcceptedDispather, bool, bEveryonAccepted);

