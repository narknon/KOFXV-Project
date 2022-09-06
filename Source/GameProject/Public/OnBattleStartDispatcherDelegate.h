#pragma once
#include "CoreMinimal.h"
#include "OnlineBattleData.h"
#include "OnBattleStartDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattleStartDispatcher, const FOnlineBattleData&, OnlineBattleData);

