#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/GameInstance.h"
#include "GameOptionData.h"
#include "FightingGameData.h"
#include "EPlayerID.h"
#include "GameInfo.h"
#include "EGameOptionBattleWinRule.h"
#include "ECharaColorID.h"
#include "EStageID.h"
#include "EBattleHandicap.h"
#include "ERankSelect.h"
#include "ECharacterID.h"
#include "ECostumeType.h"
#include "EContinueServiceType.h"
#include "EOnlineGameMode.h"
#include "EAreaSelect.h"
#include "EAntennaSelect.h"
#include "EPlayBGMType.h"
#include "EGameOptionBattleTime.h"
#include "EGameOptionAILevel.h"
#include "EGameMode.h"
#include "EMovieID.h"
#include "EDevice.h"
#include "GameInstanceGameParameters.generated.h"

class UInputManager;
class UDataTable;

UCLASS(Blueprintable, NonTransient)
class GAMEPROJECT_API UGameInstanceGameParameters : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOptionData m_gameOptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFightingGameData m_UIGameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameInfo GameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInputManager> InputManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputManager* InputManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChinemaCamera;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterColorTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterListTable;
    
public:
    UGameInstanceGameParameters();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 VersusMode_GetWinRateFirstdecimal(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 VersusMode_GetWinRate(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 VersusMode_GetWinGameCount(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 VersusMode_GetLoseGameCount(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 VersusMode_GetKillStreak(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 VersusMode_GetDrawGameCount(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable)
    void SetVSBattleWinRule(EGameOptionBattleWinRule BattleWinRule);
    
    UFUNCTION(BlueprintCallable)
    void SetUseChinemaCamera(bool bChi);
    
    UFUNCTION(BlueprintCallable)
    void SetupStoryMode(bool bContinued);
    
    UFUNCTION(BlueprintCallable)
    void SetupDecideRankMatchMode();
    
    UFUNCTION(BlueprintCallable)
    void SetUIParamStageID(EStageID _stage);
    
    UFUNCTION(BlueprintCallable)
    void SetUIParamMemberCount(EPlayerID _playerID, int32 memberCount);
    
    UFUNCTION(BlueprintCallable)
    void SetUIParamHandicapLevel(EPlayerID _playerID, EBattleHandicap _handicap);
    
    UFUNCTION(BlueprintCallable)
    void SetUIParamCharacterID(EPlayerID _playerID, ECharacterID _charaID, int32 _orderID);
    
    UFUNCTION(BlueprintCallable)
    void SetUIParamCharacterCostumeType(EPlayerID _playerID, ECostumeType _costumeType, int32 _orderID);
    
    UFUNCTION(BlueprintCallable)
    void SetUIParamCharaColorID(EPlayerID _playerID, ECharaColorID _colorID, int32 _orderID);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryWinCount(int32 _count);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryScoreTime(int32 scoreTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryContinueService(EContinueServiceType InService);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryContinueOrderSelect(bool InIsContinue);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryContinueMemberSelect(bool InIsContinue);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryContinueLBS(bool InIsContinue);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryContinue(bool _isContinue);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryClearCharacter(ECharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryCharaChange(bool _isCharaChange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetStandByRankSelect(const ERankSelect& Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetStandByRankMatch(const bool& flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetStandByOnlineMode(const EOnlineGameMode& Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetStandByInTrainingFlag(const bool& flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetStandByCasualMatch(const bool& flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetStandByAreaSelect(const EAreaSelect& select);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetStandByAntennaLevel(const EAntennaSelect& Level);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestBGMPlayType(EPlayBGMType bgm_type);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExecutedVSBattleLevel(bool execute_flg);
    
    UFUNCTION(BlueprintCallable)
    void SetGameOptionSoundParam(TArray<int32> optionSoundParam);
    
    UFUNCTION(BlueprintCallable)
    void SetGameOptionBattleWinRule(EGameOptionBattleWinRule BattleWinRule);
    
    UFUNCTION(BlueprintCallable)
    void SetGameOptionBattleTime(EGameOptionBattleTime BattleTime);
    
    UFUNCTION(BlueprintCallable)
    void SetGameOptionAILevel(EGameOptionAILevel aiLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetGameMode(EGameMode _mode);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishStageSelect(bool _finish);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishControllerSelect(bool _finish);
    
    UFUNCTION(BlueprintCallable)
    void SetExecutedMainMenuFadeIn(bool execute_flg);
    
    UFUNCTION(BlueprintCallable)
    void SetExecuteBreathVoice(bool play_flg);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerID(EPlayerID _playerID, EPlayerID _controllerID);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleStartScoreTime(int32 scoreTime);
    
    UFUNCTION(BlueprintCallable)
    EPlayerID SearchPlayerIDByControllerID(EPlayerID _controllerID);
    
    UFUNCTION(BlueprintCallable)
    void ResetStoryWinStreakCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetStoryContinueThisBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoryLastBossBattle() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsStoryContinueOrderSelect();
    
    UFUNCTION(BlueprintCallable)
    bool IsStoryContinueMemberSelect();
    
    UFUNCTION(BlueprintCallable)
    bool IsStoryContinueLBS();
    
    UFUNCTION(BlueprintCallable)
    bool IsStoryContinue();
    
    UFUNCTION(BlueprintCallable)
    bool IsStoryCharaChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoryBossBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandByRankMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandByInTraining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandByCasualMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRankMatchGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishedStageSelect();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishedControllerSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableStage(EStageID stage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableCharacter(ECharacterID Chara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCusualMatchGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChoiceOneCharacterGameMode();
    
    UFUNCTION(BlueprintCallable)
    void IncrementCommonBattleTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWinCount(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameOptionBattleWinRule GetVSBattleWinRule() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUseChinemaCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageID GetUIParamStageID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUIParamMemberCount(EPlayerID _playerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleHandicap GetUIParamHandicapLevel(EPlayerID _playerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterID GetUIParamCharacterID(EPlayerID _playerID, int32 _orderID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECostumeType GetUIParamCharacterCostumeType(EPlayerID _playerID, int32 _orderID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharaColorID GetUIParamCharaColorID(EPlayerID _playerID, int32 _orderID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterID GetUIParamBaseCharacterID(EPlayerID _playerID, int32 _orderID) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetStoryWinStreakCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryWinCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryScoreTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieID GetStoryMovieID();
    
    UFUNCTION(BlueprintCallable)
    EContinueServiceType GetStoryContinueService();
    
    UFUNCTION(BlueprintCallable)
    ECharacterID GetStoryClearCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERankSelect GetStandByRankSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineGameMode GetStandByOnlineMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAreaSelect GetStandByAreaSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAntennaSelect GetStandByAntennaLevel();
    
    UFUNCTION(BlueprintCallable)
    EPlayBGMType GetRequestBGMPlayType();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsExecutedVSBattleLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetGameOptionSoundParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameOptionBattleWinRule GetGameOptionBattleWinRule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameOptionBattleTime GetGameOptionBattleTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameOptionAILevel GetGameOptionAILevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameMode GetGameMode();
    
    UFUNCTION(BlueprintCallable)
    FFightingGameData GetFightingGameData();
    
    UFUNCTION(BlueprintCallable)
    bool GetExecutedMainMenuFadeIn();
    
    UFUNCTION(BlueprintCallable)
    bool GetExecuteBreathVoice();
    
    UFUNCTION(BlueprintCallable)
    EDevice GetDeviceType();
    
    UFUNCTION(BlueprintCallable)
    EPlayerID GetControllerID(EPlayerID _playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCommonBattleTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetCharacterListTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetCharacterColorTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleStartScoreTime() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleRemainingTime();
    
    UFUNCTION(BlueprintCallable)
    void DestroyCharaEffect();
    
    UFUNCTION(BlueprintCallable)
    int32 DeleteUIParamLastOrderMember(EPlayerID _playerID);
    
    UFUNCTION(BlueprintCallable)
    void DeleteUIParamAllMember(EPlayerID _playerID);
    
    UFUNCTION(BlueprintCallable)
    void AddStoryWinStreakCount();
    
    UFUNCTION(BlueprintCallable)
    void AddStoryWinCount();
    
};

