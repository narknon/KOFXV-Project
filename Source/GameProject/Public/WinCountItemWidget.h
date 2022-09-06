#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "WinCountItemWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UWinCountItemWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_setcount;
    
public:
    UWinCountItemWidget();
};

