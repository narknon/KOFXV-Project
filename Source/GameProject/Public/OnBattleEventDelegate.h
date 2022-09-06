#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "OnBattleEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattleEvent, EPlayerID, PlayerID);

