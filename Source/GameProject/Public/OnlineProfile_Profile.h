#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EItemStateOnlineProfile.h"
#include "ECursorSelectedItemOnlineProfile.h"
#include "ERankGrade.h"
#include "OnlineProfile_Profile.generated.h"

class UPauseMenuItemConfirmButtonWidget;
class UTextBlock;
class UDataTable;
class UUserWidget;
class UGuideItemArrayWidget;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineProfile_Profile : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_titles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_ANIM_wdw_1164_Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_03_04_follow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* WBP_99_itemA_button_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECursorSelectedItemOnlineProfile CursorSelectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BestUsedrChara;
    
public:
    UOnlineProfile_Profile();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateProfileItemState(ECursorSelectedItemOnlineProfile Item, EItemStateOnlineProfile State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTop3CharaTexture(UTexture2D* CharaTexNo1, UTexture2D* CharaTexNo2, UTexture2D* CharaTexNo3);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingWinRate(int32 WinRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingWinCount(int32 WinCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingTotalGameNum(int32 gameNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingRankmatchPoint(int32 RankmatchPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingRanking(int32 Ranking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingOtherProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingOnlineID(const FString& OnlineID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingMyProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingLossCount(int32 lossCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingDrawCount(int32 DrawCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingAvatarTex(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRankGrade(ERankGrade Grade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFeirPlayScore(float Score);
    
};

