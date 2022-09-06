#pragma once
#include "CoreMinimal.h"
#include "ResultBaseWidget.h"
#include "RankMatchResultWidget.generated.h"

class URankResultDataWidget;
class UResultRoundWidget;
class UResultTotalWinWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankMatchResultWidget : public UResultBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<URankResultDataWidget*> DataWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultRoundWidget* WBP_94_roundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultTotalWinWidget* WBP_94_totalWins;
    
public:
    URankMatchResultWidget();
};

