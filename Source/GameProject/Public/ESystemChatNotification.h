#pragma once
#include "CoreMinimal.h"
#include "ESystemChatNotification.generated.h"

UENUM(BlueprintType)
enum class ESystemChatNotification : uint8 {
    TypeA,
    TypeB,
    TypeC,
    Max,
};

