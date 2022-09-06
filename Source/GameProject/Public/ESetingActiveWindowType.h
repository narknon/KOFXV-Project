#pragma once
#include "CoreMinimal.h"
#include "ESetingActiveWindowType.generated.h"

UENUM(BlueprintType)
enum class ESetingActiveWindowType : uint8 {
    WaitSetting,
    BattleSetting,
    EntryChara,
    EntryTeam,
    EntryCharaSel,
    EntryTeamSel,
    StageSel,
    SoundSel,
    JacketSel,
    TitleSel,
    Other,
    CommandList,
    ButtonConfig,
    Confirm,
};

