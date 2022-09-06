#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "SettingWidget.generated.h"

class USettingMenuItemSwitchWidget;
class UUserWidget;
class UUserSettingWidget;
class UElectricBulletinBoardWindowWidget;
class UHaveGuideWindow;
class USettingItemWindowSlotWidget;
class UPauseMenuItemConfirmButtonWidget;
class UConfirmBoxButtonBox;
class USaveButtonItemWidget;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidget* WBP_95_00_userSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_ANIM_wdw_1164_Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UElectricBulletinBoardWindowWidget* WBP_95_00_stageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingItemWindowSlotWidget* WBP_95_00_category_slot_waiting_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemSwitchWidget* waiting_0_item_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingItemWindowSlotWidget* WBP_95_00_category_slot_waiting_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemSwitchWidget* waiting_1_item_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemSwitchWidget* waiting_1_item_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemSwitchWidget* waiting_1_item_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingItemWindowSlotWidget* WBP_95_00_category_slot_battle_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* battle_0_item_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* battle_0_item_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* battle_0_item_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingItemWindowSlotWidget* WBP_95_00_category_slot_battle_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* battle_1_item_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* battle_1_item_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* battle_1_item_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UConfirmBoxButtonBox* WBP_99_itemA_type_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UConfirmBoxButtonBox* WBP_99_itemA_type_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UConfirmBoxButtonBox* WBP_99_itemA_type_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveButtonItemWidget* WBP_95_00_item_save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_A_C_160;
    
public:
    USettingWidget();
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindow();
    
};

