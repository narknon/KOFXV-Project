#pragma once
#include "CoreMinimal.h"
#include "ResultBaseWidget.h"
#include "TournamentResultWidget.generated.h"

class UTournamentResultDataWidget;
class UResultRoundWidget;
class UResultTotalWinWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTournamentResultWidget : public UResultBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UTournamentResultDataWidget*> DataWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultRoundWidget* WBP_94_roundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultTotalWinWidget* WBP_94_totalWins;
    
public:
    UTournamentResultWidget();
};

