#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultRoundWidget.generated.h"

class UResultRoundItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultRoundWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UResultRoundItemWidget*> RoundItemArray;
    
public:
    UResultRoundWidget();
};

