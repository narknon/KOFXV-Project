#pragma once
#include "CoreMinimal.h"
#include "ETeamMemberPosition.generated.h"

UENUM(BlueprintType)
enum class ETeamMemberPosition : uint8 {
    Normal,
    Frist,
    Last,
    Max,
};

