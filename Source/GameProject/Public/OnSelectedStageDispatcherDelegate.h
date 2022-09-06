#pragma once
#include "CoreMinimal.h"
#include "EStageID.h"
#include "OnSelectedStageDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedStageDispatcher, EStageID, StageID);

