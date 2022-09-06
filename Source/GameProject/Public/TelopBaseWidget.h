#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "TelopBaseWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTelopBaseWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UTelopBaseWidget();
    UFUNCTION(BlueprintCallable)
    void SetTelopText(const FText& InText);
    
};

