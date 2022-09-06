#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EUiOperation.h"
#include "SettingLayoutWidget.generated.h"

class USettingStageListWidget;
class USettingWidget;
class USettingJacketListWidget;
class USettingTitleListWidget;
class USettingSoundListWidget;
class USettingCharaListWidget;
class USelectorWidget;
class UCostume_Customize;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingLayoutWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingWidget* WBP_95_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingStageListWidget* WBP_95_01_list_stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingTitleListWidget* WBP_95_01_TitlesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingJacketListWidget* WBP_95_01_list_jacket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingSoundListWidget* WBP_95_01_list_sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingCharaListWidget* WBP_95_01_list_chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelectorWidget* WBP_95_01_selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCostume_Customize* WBP_92_01_costume_customize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_type;
    
public:
    USettingLayoutWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenSelector();
    
    UFUNCTION(BlueprintCallable)
    void OpenSystemWindow(bool isFromWaitSetting, int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void OpenSelector();
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindow(int32 PlayerID, EUiOperation Operation, bool isSave, bool isFromWaitSetting);
    
    UFUNCTION(BlueprintCallable)
    void ChangeNotActiveWindowSetting(int32 PlayerID, EUiOperation Operation, bool is_close_se);
    
    UFUNCTION(BlueprintCallable)
    void ChangeNotActiveWindowCommandList(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeNotActiveWindowButtonConfig(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActiveWindowWaitSetting();
    
};

