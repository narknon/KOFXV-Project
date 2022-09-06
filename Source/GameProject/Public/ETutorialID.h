#pragma once
#include "CoreMinimal.h"
#include "ETutorialID.generated.h"

UENUM(BlueprintType)
enum class ETutorialID : uint8 {
    Moves,
    Crouch,
    Dash,
    Jump,
    Jump_Small,
    Jump_Medium,
    Jump_Large,
    Guard_Stand,
    Guard_Crouch,
    Guard_Crash,
    Stun,
    Evade,
    Ukemi,
    GuardCancel_Evade,
    GuardCancel_BlowAtk,
    L_Atk,
    H_Atk,
    Blow_Atk,
    Shutter_Strike,
    Another_Atk,
    Throw,
    Throw_Escape,
    CounterHit,
    Max,
    Quick_Max,
    Rush_1,
    Rush_2,
    Special_Atk,
    Ex_Special_Atk,
    Super_Special_Atk,
    Max_Special_Atk,
    Climax_Special_Atk,
    Super_Cancel,
    Advanced_Cancel,
    Climax_Cancel,
    _Max,
};

