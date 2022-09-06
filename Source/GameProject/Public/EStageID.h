#pragma once
#include "CoreMinimal.h"
#include "EStageID.generated.h"

UENUM(BlueprintType)
enum class EStageID : uint8 {
    TRA_ST,
    CHN_ST,
    BHE_ST,
    ESK_ST,
    WTF_ST,
    AAP_ST,
    LID_ST,
    SWC_ST,
    LIV_ST,
    DST_ST,
    BHS_ST,
    POC_ST,
    FRD_ST,
    FRN_ST,
    RIN_ST,
    MBS_ST,
    LBS_ST,
    HBS_ST,
    MAX,
    PLAYABLE = 0x11,
    RANDOM = 0x1F,
    NONE = 0x2F,
};

