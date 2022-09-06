#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "ResultMenuWidget.generated.h"

class UInitialRankWidget;
class UResultMenuWindowWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultMenuWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ModeSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultMenuWindowWidget* WBP_94_menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInitialRankWidget* WBP_94_InitialRank;
    
public:
    UResultMenuWidget();
};

