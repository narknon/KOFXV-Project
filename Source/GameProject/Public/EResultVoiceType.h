#pragma once
#include "CoreMinimal.h"
#include "EResultVoiceType.generated.h"

UENUM(BlueprintType)
enum class EResultVoiceType : uint8 {
    GENERAL,
    STORY,
    VERSUS,
    MAX,
};

