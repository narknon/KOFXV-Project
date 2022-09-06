#pragma once
#include "CoreMinimal.h"
#include "BattleHudValueGetter.h"
#include "AnnounceYou.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnounceYou : public UBattleHudValueGetter {
    GENERATED_BODY()
public:
    UAnnounceYou();
};

