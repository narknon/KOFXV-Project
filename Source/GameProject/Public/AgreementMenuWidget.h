#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "AgreementMenuWidget.generated.h"

class UBaseWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAgreementMenuWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UBaseWidget*> ItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_C_C_280;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_C_328;
    
public:
    UAgreementMenuWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void CloseWebWindow(const FString& FinalUrl);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindow();
    
};

