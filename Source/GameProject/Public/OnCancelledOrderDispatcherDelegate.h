#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "OnCancelledOrderDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCancelledOrderDispatcher, EPlayerID, PlayerID);

