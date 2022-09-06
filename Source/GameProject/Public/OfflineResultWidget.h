#pragma once
#include "CoreMinimal.h"
#include "ResultBaseWidget.h"
#include "OfflineResultWidget.generated.h"

class UOfflineResultDataWidget;
class UResultRoundWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOfflineResultWidget : public UResultBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UOfflineResultDataWidget*> DataWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultRoundWidget* WBP_94_roundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* PlatformSwitcher;
    
public:
    UOfflineResultWidget();
};

