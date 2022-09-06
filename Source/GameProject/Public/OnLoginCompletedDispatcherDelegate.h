#pragma once
#include "CoreMinimal.h"
#include "ELoginResult.h"
#include "OnLoginCompletedDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginCompletedDispatcher, ELoginResult, Result);

