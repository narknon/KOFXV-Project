#pragma once
#include "CoreMinimal.h"
#include "EReplayListType.generated.h"

UENUM(BlueprintType)
enum class EReplayListType : uint8 {
    Online,
    Save,
    Personal,
    RankMatchHistory,
    PlayBack,
    Max,
};

