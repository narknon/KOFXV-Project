#pragma once
#include "CoreMinimal.h"
#include "EResultVoiceGenderType.generated.h"

UENUM(BlueprintType)
enum class EResultVoiceGenderType : uint8 {
    General,
    Male,
    Female,
    MAX,
};

