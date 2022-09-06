#pragma once
#include "CoreMinimal.h"
#include "ECheckOnlineResult.h"
#include "OnCheckOnlineCompletedDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCheckOnlineCompletedDispatcher, ECheckOnlineResult, Result);

