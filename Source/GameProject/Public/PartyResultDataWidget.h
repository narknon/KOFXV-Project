#pragma once
#include "CoreMinimal.h"
#include "ResultDataBaseWidget.h"
#include "PartyResultDataWidget.generated.h"

class UPartyResultPlayerInfoWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPartyResultDataWidget : public UResultDataBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPartyResultPlayerInfoWidget*> PlayerInfoArray;
    
public:
    UPartyResultDataWidget();
};

