#pragma once
#include "CoreMinimal.h"
#include "OnBattleRoundEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattleRoundEvent, int32, Round);

