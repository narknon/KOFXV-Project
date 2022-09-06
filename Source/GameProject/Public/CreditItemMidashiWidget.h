#pragma once
#include "CoreMinimal.h"
#include "CreditItemBaseWidget.h"
#include "CreditItemMidashiWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCreditItemMidashiWidget : public UCreditItemBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* MidashiText;
    
    UCreditItemMidashiWidget();
    UFUNCTION(BlueprintCallable)
    void SetText(const FString& _text);
    
};

