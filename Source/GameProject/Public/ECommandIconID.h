#pragma once
#include "CoreMinimal.h"
#include "ECommandIconID.generated.h"

UENUM(BlueprintType)
enum ECommandIconID {
    ECommandIconID_NONE,
    ECommandIconID_8_CMD = 0xA,
    ECommandIconID_9_CMD,
    ECommandIconID_6_CMD,
    ECommandIconID_3_CMD,
    ECommandIconID_2_CMD,
    ECommandIconID_2_CMD_HOLD = 0x30,
    ECommandIconID_1_CMD = 0xF,
    ECommandIconID_4_CMD,
    ECommandIconID_4_CMD_HOLD = 0x31,
    ECommandIconID_7_CMD = 0x11,
    ECommandIconID_HADOU_CMD = 0x3F,
    ECommandIconID_R_HADOU_CMD,
    ECommandIconID_SHOURYU_CMD,
    ECommandIconID_R_SHORYU_CMD,
    ECommandIconID_YOGA_CMD,
    ECommandIconID_R_YOGA_CMD,
    ECommandIconID_LP = 0x14,
    ECommandIconID_LK,
    ECommandIconID_HP = 0x12,
    ECommandIconID_HK,
    ECommandIconID_EX = 0x16,
    ECommandIconID_PLUS = 0x1A,
    ECommandIconID_OR,
    ECommandIconID_CENTERPOINT = 0x29,
    ECommandIconID_Max = 0x2C,
    ECommandIconID_CancelMax = 0x32,
    ECommandIconID_CLOSE = 0x1C,
    ECommandIconID_AIR,
    ECommandIconID_CLOSE_AIR,
    ECommandIconID_NEARSCREEN_AIR = 0x28,
    ECommandIconID_ALSO_AIR = 0x1F,
    ECommandIconID_RAPIDLY = 0x22,
    ECommandIconID_HOLD = 0x25,
    ECommandIconID_RELEASE,
    ECommandIconID_During_Left = 0x20,
    ECommandIconID_During_Right,
};

