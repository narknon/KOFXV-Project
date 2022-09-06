#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "UserRankWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UUserRankWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
    UUserRankWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRank();
    
};

