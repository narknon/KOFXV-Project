#pragma once
#include "CoreMinimal.h"
#include "EItemStateComment.generated.h"

UENUM(BlueprintType)
enum class EItemStateComment : uint8 {
    Beginner,
    Anyone,
    Comfortably,
    SeriousGame,
    MainCharacter,
    SubCharacter,
    ShortTime,
    LongTime,
    LienChan,
    Delivery,
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

