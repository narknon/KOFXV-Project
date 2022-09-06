#pragma once
#include "CoreMinimal.h"
#include "ENotificationID.generated.h"

UENUM(BlueprintType)
enum class ENotificationID : uint8 {
    Story,
    Gauntlet,
    Survival,
    TimeAttack,
    Ironman,
    Release_Movie,
    Release_Congraturation,
    Release_Viewer,
    Release_Voice,
    Release_BGM,
    Release_Title,
    Release_SZK,
    Comp_PlayGo,
    Add_Character,
    Add_Sound,
    Add_Movie,
    Add_Artwork,
    Add_Costume,
    Add_Costume_Color,
    Add_Stage,
    Release_Character,
    Release_Sound,
};

