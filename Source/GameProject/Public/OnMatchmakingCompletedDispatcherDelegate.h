#pragma once
#include "CoreMinimal.h"
#include "OnMatchmakingCompletedDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnMatchmakingCompletedDispatcher, bool, bWasSuccessful, int32, LocalPlayerNumber, int32, OpponentPlayerNumber);

