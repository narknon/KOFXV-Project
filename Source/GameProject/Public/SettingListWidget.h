#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "SettingListWidget.generated.h"

class UScrollBox;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingListWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_99_wdwA_92_03_C_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_A_C_110;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_ANIM_wdw_A_1100_Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CursorNum;
    
public:
    USettingListWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDeleyScroll();
    
    UFUNCTION(BlueprintCallable)
    void DeleyScroll();
    
};

