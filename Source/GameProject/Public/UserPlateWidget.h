#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "BattleHudBase.h"
#include "UserPlateWidget.generated.h"

class UScoreWidget;
class UWidgetSwitcher;
class UWinCountUnitWidget;
class UWinWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UUserPlateWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* PlayerWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWinCountUnitWidget* WBP_90_setcount_set;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScoreWidget* WBP_90_score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWinWidget* WBP_90_wins;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Score;
    
public:
    UUserPlateWidget();
};

