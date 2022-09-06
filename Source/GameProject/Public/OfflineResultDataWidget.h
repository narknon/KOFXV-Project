#pragma once
#include "CoreMinimal.h"
#include "ResultDataBaseWidget.h"
#include "OfflineResultDataWidget.generated.h"

class UResultScoreUnitWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOfflineResultDataWidget : public UResultDataBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultScoreUnitWidget* WBP_94_table;
    
    UOfflineResultDataWidget();
};

