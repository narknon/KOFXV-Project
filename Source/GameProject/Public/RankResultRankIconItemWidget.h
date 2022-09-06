#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "RankResultRankIconItemWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankResultRankIconItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_starColor;
    
public:
    URankResultRankIconItemWidget();
};

