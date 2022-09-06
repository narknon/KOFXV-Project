#pragma once
#include "CoreMinimal.h"
#include "ECustomStencilVal.generated.h"

UENUM(BlueprintType)
enum class ECustomStencilVal : uint8 {
    ECS_DEFAULT,
    ECS_EFFECT_NO_PRIORITY_RENDERING,
    ECS_SPECIAL_SHUNEI_HAND_SETTING,
    ECS_EFFECT_BEHIND_HUD_TOP,
    ECS_HUD_TOP,
    ECS_EFFECTS_BEHIND_CHAR = 0x6,
    ECS_CHAR_BACK = 0x8,
    ECS_CHAR_FRONT,
    ECS_WEAPON_ANIMAL_BACK,
    ECS_WEAPON_ANIMAL_FRONT,
    ECS_EFFECTS_INFRONT_CHAR,
    ECS_HUD_BOTTOM = 0xF,
    ECS_MAX UMETA(Hidden),
};

