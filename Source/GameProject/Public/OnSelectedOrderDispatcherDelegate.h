#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "OnSelectedOrderDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSelectedOrderDispatcher, EPlayerID, PlayerID, int32, CharacterIndex, int32, OrderCountID);

