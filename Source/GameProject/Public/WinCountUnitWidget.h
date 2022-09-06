#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "WinCountUnitWidget.generated.h"

class UWinCountItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UWinCountUnitWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWinCountItemWidget* WBP_90_setcount_3_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWinCountItemWidget* WBP_90_setcount_3_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWinCountItemWidget* WBP_90_setcount_3_3;
    
public:
    UWinCountUnitWidget();
};

