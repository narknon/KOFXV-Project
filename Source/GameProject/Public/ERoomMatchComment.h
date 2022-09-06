#pragma once
#include "CoreMinimal.h"
#include "ERoomMatchComment.generated.h"

UENUM(BlueprintType)
enum class ERoomMatchComment : uint8 {
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

