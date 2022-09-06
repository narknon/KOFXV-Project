#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "OnUserOrderConfirmDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserOrderConfirm, EPlayerID, PlayerID);

