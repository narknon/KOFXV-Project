#pragma once
#include "CoreMinimal.h"
#include "EActivityID.generated.h"

UENUM(BlueprintType)
enum class EActivityID : uint8 {
    Activity_StoryMode,
    Activity_StoryMode_Stage1,
    Activity_StoryMode_Stage2,
    Activity_StoryMode_Stage3,
    Activity_StoryMode_Stage4,
    Activity_StoryMode_Stage5,
    Activity_StoryMode_Stage6,
    Activity_StoryMode_Stage7,
    Activity_StoryMode_Stage8,
    Activity_RankedMatch,
    Activity_CasualMatch,
    Activity_RoomMatch,
    Activity_Training,
    End,
};

