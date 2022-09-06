#pragma once
#include "CoreMinimal.h"
#include "EUiOperation.h"
#include "Matchmaking_LayoutBase.h"
#include "ECursorSelectedItemCasualMatch.h"
#include "ERankGrade.h"
#include "ERankDanni.h"
#include "CasualMatch_Layout.generated.h"

class UCasualMatchSettingWindow;
class UTurorialProgressWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCasualMatch_Layout : public UMatchmaking_LayoutBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCasualMatchSettingWindow* SettingWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTurorialProgressWidget* WBP_03_Tutorial_progress;
    
    UCasualMatch_Layout();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRankInformation(const ERankDanni& RankDanni, const ERankGrade& RankGrade, const int32& StarCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemText(const ECursorSelectedItemCasualMatch& CursorSelectedItemIndex, const int32& TextIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCursorPosition(const ECursorSelectedItemCasualMatch& CursorSelectedItemIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBattleResultInformation(const int32& WinCount, const int32& LoseCount, const int32& DrawCount, const float& WinRate, const int32& MaxConsecutiveWins, const int32& ConsecutiveWins);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBattleConsentWindowCursor(const int32& CursorIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenedMatchingFailureWindowFlag(bool NewIsOpenedMatchingFailureWindow);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenedConfirmWindowFlag(bool IsOpenedCnfirmWindow);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenedBattleConsentWindowFlag(bool NewIsOpenedBattleConsentWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenSearchingOpponentWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMatchingFailureWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenCasualMatchWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBattleConsentWindow(const FText& OnlineID, const int32& LineSpeed, const int32& FairPlayScore);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenedMatchingFailureWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenedConfirmWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenedBattleConsentWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitRankWindow(const ERankDanni& RankDanni, const ERankGrade& RankGrade, const int32& StarCount);
    
    UFUNCTION(BlueprintCallable)
    void GotoWaitTrainingMode(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecisionStandByInTraining();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecisionItemDefaultButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSearchingOpponentWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseMatchingFailureWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseCasualMatchWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseBattleConsentWindow();
    
};

