#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "EUiOperation.h"
#include "EEnterStep.h"
#include "Entry_ModeLayout.generated.h"

class UEntry_PlayerList;
class UEntry_TournamentSetting;
class UWidgetSwitcher;
class UBaseWidget;
class UHaveGuideWindow;
class UEntry_Mode;
class UEntry_VersusSetting;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UEntry_ModeLayout : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Guide_ModeSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Guide_MatchTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Guide_TournamentSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Guide_TournamentPlayerEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Guide_TournamentAllclearConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_ANIM_unsel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_Mode* WBP_92_00_Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_VersusSetting* WBP_92_00_VersusSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_TournamentSetting* WBP_92_00_TournamentSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_PlayerList* WBP_92_00_PlayerList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOperationalWidget* currentWidget;
    
public:
    UEntry_ModeLayout();
protected:
    UFUNCTION(BlueprintCallable)
    void WindowUnselOn();
    
    UFUNCTION(BlueprintCallable)
    void WindowUnselOff();
    
public:
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

