#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ReportWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UReportWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_message;
    
public:
    UReportWidget();
    UFUNCTION(BlueprintCallable)
    void StopIndicatorAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayIndicatorAnimation();
    
};

