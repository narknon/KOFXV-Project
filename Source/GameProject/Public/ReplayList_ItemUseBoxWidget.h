#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ReplayList_ItemUseBoxWidget.generated.h"

class UWidgetSwitcher;
class UImage;
class UTextBlock;
class UReplayList_ItemWidget;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UReplayList_ItemUseBoxWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_onlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Chara_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Chara_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Chara_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_winlose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* base_you;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_you;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplayList_ItemWidget* Parent;
    
public:
    UReplayList_ItemUseBoxWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WinColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OffColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoseColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawColor();
    
};

