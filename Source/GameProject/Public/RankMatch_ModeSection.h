#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "EUiOperation.h"
#include "EEnterStep.h"
#include "RankMatch_ModeSection.generated.h"

class UPauseMenuItemConfirmButtonWidget;
class UUserSettingWidgetRankMatch;
class USettingItemWindowWidget;
class USaveButtonItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankMatch_ModeSection : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetRankMatch* WBP_03_00_userInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingItemWindowWidget* WBP_95_00_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveButtonItemWidget* WBP_95_00_item_save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* Item_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* Item_1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOperationalWidget* currentWidget;
    
public:
    URankMatch_ModeSection();
    UFUNCTION(BlueprintCallable)
    void VersusSettingIn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void VerSusSettingConfirm(int32 PlayerID, EUiOperation Operation);
    
public:
    UFUNCTION(BlueprintCallable)
    void TournamentIn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TournamentConfirm(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void SettingToMode(int32 PlayerID, EUiOperation Operation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCursorToCurrentSection(EEnterStep step);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerListToTournament(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ModeToVersusSetting();
    
    UFUNCTION(BlueprintCallable)
    void ModeToTournament();
    
    UFUNCTION(BlueprintCallable)
    void ModeLayout_Back(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ModeConfirm(int32 PlayerID, EUiOperation Operation);
    
};

