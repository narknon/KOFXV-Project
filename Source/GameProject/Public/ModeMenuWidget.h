#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ModeMenuWidget.generated.h"

class UTextBlock;
class UModeMenuItemWidget;
class UGuideItemArrayWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UModeMenuWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UModeMenuItemWidget*> ModeMenuItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_ANIM_wdw_ModeMenu_74;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* WBP_GuideItemArray;
    
public:
    UModeMenuWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WindowUnselState(bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetModeMenuItemNum(int32 ItemNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitItemVisual(UModeMenuItemWidget* SelectVisualItem);
    
};

