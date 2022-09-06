#pragma once
#include "CoreMinimal.h"
#include "EPauseMenu.generated.h"

UENUM(BlueprintType)
enum class EPauseMenu : uint8 {
    VersusPvC,
    VersusPvP,
    SelectCommon,
    GhostMatch,
    Training,
    TrainingWating,
    BattleStory,
    BattlePvC,
    BattlePvP,
    BattleCvC,
    RoomHost,
    RoomGuest,
    Tutorial,
    TutorialKotei,
    TutorialAfter,
    OnlineTraining,
    OnlineTrainingP2,
    CasualBattle,
    CasualWatch,
    RankMatchWait,
    Replay,
    Trial,
    MAX,
    None,
};

