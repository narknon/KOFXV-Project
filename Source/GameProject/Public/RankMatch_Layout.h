#pragma once
#include "CoreMinimal.h"
#include "Matchmaking_LayoutBase.h"
#include "EUiOperation.h"
#include "ERankGrade.h"
#include "ERankDanni.h"
#include "EConfirmWindowType.h"
#include "EEnterStep.h"
#include "ECursorSelectedItemRankMatch.h"
#include "EPlayerID.h"
#include "RankMatch_Layout.generated.h"

class URankMatch_ModeSection;
class UTurorialProgressWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankMatch_Layout : public UMatchmaking_LayoutBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankMatch_ModeSection* WBP_03_00_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTurorialProgressWidget* WBP_03_Tutorial_progress;
    
    URankMatch_Layout();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRankInformation(const ERankDanni& RankDanni, const ERankGrade& RankGrade, const int32& StarCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateModeDescriptionWindow(const int32& PageNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemText(const ECursorSelectedItemRankMatch& CursorSelectedItemIndex, const int32& TextIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemState(const ECursorSelectedItemRankMatch& CursorSelectedItemIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDailyBoost(bool IsBoost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateConfirmWindow(const int32& CursorIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBattleResultInformation(const int32& WinCount, const int32& LoseCount, const int32& DrawCount, const float& WinRate, const int32& MaxConsecutiveWins, const int32& ConsecutiveWins);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBattleConsentWindowCursor(const int32& CursorIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool TemporaryAssignPlayerConttoler(int32 PlayerID, int32 ControllerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOpenedTutorialWindowFlag(bool NewIsOpenedTutorialWindow);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenedModeDescriptionWindowFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenedMatchingFailureWindowFlag(bool NewIsOpenedMatchingFailureWindow);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenedConfirmWindowFlag(bool IsOpenedCnfirmWindow);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenedBattleConsentWindowFlag(bool NewIsOpenedBattleConsentWindow);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCursorToCurrentSection();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetConfirmWindowType(EConfirmWindowType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenTutorialSelectWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenSearchingOpponentWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenRankMatchWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenModeDescriptionWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMatchingFailureWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBattleConsentWindow(const FText& OnlineID, const int32& LineSpeed, const int32& FairPlayScore);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenedTutorialWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenedModeDescriptionWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenedMatchingFailureWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenedConfirmWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenedBattleConsentWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitControllerAssign();
    
public:
    UFUNCTION(BlueprintCallable)
    void GotoWaitTrainingMode(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    ERankDanni GetRankDanni(const EPlayerID& PlayerID);
    
    UFUNCTION(BlueprintCallable)
    EConfirmWindowType GetConfirmWindowType();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EntrySkipToSection(EEnterStep ToStep);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecisionTutorialSelectWindow(const int32& CursorIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecisionItemDefaultButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecisionConfirmWindow(const int32& CursorIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ControllerSelectEntry(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ControllerSelectConfirm_R(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ControllerSelectConfirm_L(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ControllerSelectCancel_R(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ControllerSelectCancel_L(int32 PlayerID, EUiOperation Operation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseTutorialSelectWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSearchingOpponentWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseRankMatchWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseModeDescriptionWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseMatchingFailureWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseBattleConsentWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BacktoMainMenu(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void AssignPlayerConttoler();
    
};

