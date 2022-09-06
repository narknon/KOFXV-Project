#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "TrialSelectItemWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTrialSelectItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_level;
    
    UTrialSelectItemWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNotClearIconEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetClearIconEvent();
    
};

