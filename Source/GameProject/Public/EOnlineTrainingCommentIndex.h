#pragma once
#include "CoreMinimal.h"
#include "EOnlineTrainingCommentIndex.generated.h"

UENUM(BlueprintType)
enum class EOnlineTrainingCommentIndex : uint8 {
    Anyone,
    MainCharacter = 0x4,
    SubCharacter,
    ShortTime,
    LongTime,
    Delivery = 0x9,
    RankNoMatter,
    ChampionRankOnly,
    KingOfFightersRankOnly,
    HaSyaRankOnly,
    MasterRankOnly,
    TeacherRankOnly,
    FighterRankOnly,
    BeginnersRankOnly,
    Max,
};

