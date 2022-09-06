#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "OptionHUDAdjustWidget.generated.h"

class UOptionHighContrastWidget;
class UOptionHUDAdjustMenuWidget;
class UGuildWidget;
class UOptionHDRWidget;
class UUserWidget;
class UImage;
class USceneMgtGameInstance;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOptionHUDAdjustWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionHUDAdjustMenuWidget* WBP_10_HUDadjust_menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuildWidget* WBP_10_HUDadjust_guide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionHDRWidget* WBP_10_HDR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionHighContrastWidget* WBP_10_highContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* hud_top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* hud_middle_left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* hud_middle_right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* hud_bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* arrow_top_up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* arrow_top_down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* arrow_middle_left_outside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* arrow_middle_left_inside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* arrow_bottom_up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* arrow_bottom_down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* base_fill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* base_battle;
    
public:
    UOptionHUDAdjustWidget();
    UFUNCTION(BlueprintCallable)
    void GotoOptionFadeSwitchProc();
    
    UFUNCTION(BlueprintCallable)
    void GotoOptionFadeEndProc();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GotoOptionFade(USceneMgtGameInstance* Instance);
    
};

