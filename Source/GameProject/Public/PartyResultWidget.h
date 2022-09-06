#pragma once
#include "CoreMinimal.h"
#include "ResultBaseWidget.h"
#include "PartyResultWidget.generated.h"

class UPartyResultDataWidget;
class UResultRoundWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPartyResultWidget : public UResultBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPartyResultDataWidget*> DataWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultRoundWidget* WBP_94_roundList;
    
public:
    UPartyResultWidget();
};

