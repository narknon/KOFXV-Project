#pragma once
#include "CoreMinimal.h"
#include "EOnlineProfileMainMenuOpenFlowState.generated.h"

UENUM(BlueprintType)
enum class EOnlineProfileMainMenuOpenFlowState : uint8 {
    None,
    NetCheckStart,
    NetCheckNow,
    NetCheckEnd_Successful,
    NetCheckEnd_NotDisplayFailed,
    NetCheckEnd_NetworkFailed,
    ProfileReadStart,
    ProfileReadEnd,
    Max,
};

