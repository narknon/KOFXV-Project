#pragma once
#include "CoreMinimal.h"
#include "ETrainingAction.generated.h"

UENUM(BlueprintType)
enum class ETrainingAction : uint8 {
    Stand,
    Crouch,
    Forward,
    Backward,
    Dash,
    BackStep,
    JumpV,
    JumpV_Small,
    JumpF,
    JumpF_Small,
    JumpF_Medium,
    JumpF_Large,
    JumpB,
    JumpB_Small,
    JumpB_Medium,
    JumpB_Large,
    Player,
    Cpu_Lv1,
    Cpu_Lv2,
    Cpu_Lv3,
    Cpu_Lv4,
    Cpu_Lv5,
};

