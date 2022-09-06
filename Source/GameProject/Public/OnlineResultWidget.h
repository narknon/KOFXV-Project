#pragma once
#include "CoreMinimal.h"
#include "ResultBaseWidget.h"
#include "OnlineResultWidget.generated.h"

class UResultRoundWidget;
class UOnlineResultDataWidget;
class UResultTotalWinWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineResultWidget : public UResultBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UOnlineResultDataWidget*> DataWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultRoundWidget* WBP_94_roundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultTotalWinWidget* WBP_94_totalWins;
    
public:
    UOnlineResultWidget();
};

