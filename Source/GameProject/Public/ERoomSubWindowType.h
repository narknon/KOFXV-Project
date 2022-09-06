#pragma once
#include "CoreMinimal.h"
#include "ERoomSubWindowType.generated.h"

UENUM(BlueprintType)
enum class ERoomSubWindowType : uint8 {
    Chat,
    MemberList,
    Max,
};

