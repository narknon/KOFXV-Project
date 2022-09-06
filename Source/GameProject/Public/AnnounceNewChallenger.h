#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "AnnounceNewChallenger.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnounceNewChallenger : public UBattleHudBase {
    GENERATED_BODY()
public:
    UAnnounceNewChallenger();
};

