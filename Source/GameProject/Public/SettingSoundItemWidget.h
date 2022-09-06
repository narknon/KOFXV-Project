#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "SettingSoundItemWidget.generated.h"

class UWidgetSwitcher;
class UTextBlock;
class USizeBox;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingSoundItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_95_01_icon_seal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_08_icon_listen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_C_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_257;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_condition;
    
public:
    USettingSoundItemWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelAnim();
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayBGMWithDelay();
    
    UFUNCTION(BlueprintCallable)
    void RequestEqualizerParamUpdateON();
    
    UFUNCTION(BlueprintCallable)
    void RequestEqualizerParamUpdateOFF();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NmlAnim();
    
};

