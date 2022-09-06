#pragma once
#include "CoreMinimal.h"
#include "ERequestOpenMenu.generated.h"

UENUM(BlueprintType)
enum class ERequestOpenMenu : uint8 {
    None,
    Tutorial_BasicMove,
    Tutorial_AttackBehavior,
    Trial_MemberSelect,
    Trial_MissionList,
};

