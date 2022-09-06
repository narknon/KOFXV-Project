#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "OnCancelledCharacterDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCancelledCharacterDispatcher, EPlayerID, PlayerID);

