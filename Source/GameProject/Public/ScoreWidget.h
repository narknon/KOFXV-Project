#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "ScoreWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UScoreWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UImage*> digit_score;
    
public:
    UScoreWidget();
};

