#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EPlayerID.h"
#include "ERankChangeMatch.h"
#include "RankMatchPromotion.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankMatchPromotion : public UBaseWidget {
    GENERATED_BODY()
public:
    URankMatchPromotion();
    UFUNCTION(BlueprintCallable)
    ERankChangeMatch CheckMatchRankChangeMatch(EPlayerID PlayerID);
    
};

