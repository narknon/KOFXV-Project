#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "ECharacterID.h"
#include "EUiOperation.h"
#include "EPlayerID.h"
#include "ECharaColorID.h"
#include "Matchmaking_LayoutBase.generated.h"

class UAgreementWindow;
class UUserWidget;
class UOnlineGameSubsystem;
class USceneMgtGameInstance;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMatchmaking_LayoutBase : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAgreementWindow* AgreementWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* BattleSettingGuide;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOnlineGameSubsystem* OnlineGameSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USceneMgtGameInstance* SceneMgtGameInstance;
    
public:
    UMatchmaking_LayoutBase();
    UFUNCTION(BlueprintCallable)
    void StartTutorialBattle(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void PreCompletedRankMatching();
    
    UFUNCTION(BlueprintCallable)
    void OpenBattleSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedCharacterDispatcher(EPlayerID PlayerID, int32 CharacterIndex, ECharacterID CharacterID, ECharaColorID CharaColorID, int32 CharaCostumeID);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedBattleMemberDispatcher();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchingAccepted(bool bEveryonAccepted);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseBattleSetting(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleConsentTimeUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusSettingWindow(bool bFocus);
    
    UFUNCTION(BlueprintCallable)
    void DelegateOnMatchingAcceptedDispather(bool IsSuccessfulMatching);
    
    UFUNCTION(BlueprintCallable)
    void CompletedRankMatching(bool IsMatchingComplited, int32 LocalPlayerNumber, int32 OpponentPlayerNumber);
    
};

