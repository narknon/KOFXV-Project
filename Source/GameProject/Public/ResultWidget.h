#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultWidget.generated.h"

class UWidgetSwitcher;
class UResultTelopWidget;
class UResultGameoverWidget;
class UResultMenuWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultTelopWidget* WBP_94_telop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultGameoverWidget* WBP_94_announce_gameover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultMenuWidget* WBP_94_menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_94_menu_BG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_94_announce_gameover_bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_94_BG;
    
public:
    UResultWidget();
};

