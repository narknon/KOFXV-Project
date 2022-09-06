#pragma once
#include "CoreMinimal.h"
#include "PauseMenuType.generated.h"

UENUM(BlueprintType)
enum class PauseMenuType : uint8 {
    MenuType_Button,
    MenuType_Switch,
    MenuType_Restart,
    MenuType_Text,
    MenuType_MAX UMETA(Hidden),
};

