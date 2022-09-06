#pragma once
#include "CoreMinimal.h"
#include "StageVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStageVisibility, bool, bVisible);

