#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameSpeedEventDelegate.h"
#include "EContorollerSelectFromGameMode.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnBattleRoundEventDelegate.h"
#include "TimeSlowDelegateDelegate.h"
#include "OnBattleEventDelegate.h"
#include "OnDemoEventDelegate.h"
#include "OnDemoCutEventDelegate.h"
#include "ECharacterID.h"
#include "AvailableCostumeMap.h"
#include "ECostumeType.h"
#include "ESceneName.h"
#include "ETournamentRule.h"
#include "EStageID.h"
#include "EStageBgmType.h"
#include "ECharaColorID.h"
#include "ERequestOpenMenu.h"
#include "EPlayerOperationType.h"
#include "EBattleHandicap.h"
#include "EGameOptionBattleWinRule.h"
#include "EEntryOperationSide.h"
#include "EOrangeMenuID.h"
#include "EGameMode.h"
#include "EPlayerID.h"
#include "EGameOptionAILevel.h"
#include "EGameOptionBattleTime.h"
#include "EDeviceType.h"
#include "EGalleryMovieID.h"
#include "Engine/LatentActionManager.h"
#include "GameModeData.h"
#include "UObject/NoExportTypes.h"
#include "ETeamID.h"
#include "UObject/NoExportTypes.h"
#include "EMovieID.h"
#include "EGalleryVoiceID.h"
#include "GamePlayGameInstanceSubsystem.generated.h"

class UStringTable;
class UMainViewportWidget;
class UGameInstanceGameParameters;

UCLASS(Blueprintable)
class GAMEPROJECT_API UGamePlayGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeSlowDelegate TimeSlowDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleEvent SuperMoveAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleEvent MaxSuperMoveAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleEvent ClimaxSuperMoveAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleRoundEvent BattleRoundStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleRoundEvent BattleRoundEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleRoundEvent PlayerOperationStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleEvent BattleResultAnnounce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleEvent BattleWinningAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleEvent BattleActorDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDemoEvent StageDemoStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDemoEvent StageDemoEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDemoCutEvent StageDemoChangeCut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDemoEvent StartAkebonoKO;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDemoEvent EndAkebonoKO;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDemoEvent OnBattleRestart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSpeedEvent GameSpeedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMainViewportWidget* MainViewportWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadedStaitcAssetOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* CostumeStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* ColorStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRoomMatchHaveCharacterSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FAvailableCostumeMap> AvailableCostume;
    
public:
    UGamePlayGameInstanceSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnLockDLC3();
    
    UFUNCTION(BlueprintCallable)
    void UnLockDLC2();
    
    UFUNCTION(BlueprintCallable)
    void UnLockDLC1();
    
    UFUNCTION(BlueprintCallable)
    void UnlockCostume(ECharacterID Character, ECostumeType CostumeType);
    
    UFUNCTION(BlueprintCallable)
    void UnLoadStaitcAsset();
    
    UFUNCTION(BlueprintCallable)
    void SetUserInterfaceCursorSpeed(ESceneName Scene);
    
    UFUNCTION(BlueprintCallable)
    void SetTravelTrainingMode();
    
    UFUNCTION(BlueprintCallable)
    void SetTransition(ESceneName Destination, const FString& TravelURL);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentRule(ETournamentRule Rule);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamRandomFlag(int32 PlayerID, bool IsTeamRandom);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamBattle(bool TeamBattle);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryBossBattle(bool StoryBossBattle);
    
    UFUNCTION(BlueprintCallable)
    void SetStageBgmType(EStageID StageID, EStageBgmType NewType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedStageID(EStageID stage);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedOrder(int32 PlayerID, int32 Index, int32 OrderIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedCostume(int32 PlayerID, int32 Index, ECostumeType Costume);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedColor(int32 PlayerID, int32 Index, ECharaColorID ColorID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCharacterCounter(int32 PlayerID, int32 CharacterNum);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedCharacter(int32 PlayerID, int32 Index, ECharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void SetRoomMatchHaveCharacterSelect(bool bHaveCharacterSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetRestartMatchmaking(bool IsRestart);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestOpenMenu(ERequestOpenMenu MenuID);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerOperationType(int32 PlayerID, EPlayerOperationType OperationType);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerBattleHandicap(int32 PlayerID, EBattleHandicap BattleHandicap);
    
    UFUNCTION(BlueprintCallable)
    void SetOperationSide(EEntryOperationSide _in);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenMenuFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineBattleStartSceneName(ESceneName SceneName);
    
    UFUNCTION(BlueprintCallable)
    void SetMobLevelVisible(bool bVisible, bool bHighEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchingFromTraining(bool TrainingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetMainViewportWidget(UMainViewportWidget* ptr);
    
    UFUNCTION(BlueprintCallable)
    void SetMainMenuIdByGameMode();
    
    UFUNCTION(BlueprintCallable)
    void SetMainMenuID(EOrangeMenuID MenuID);
    
    UFUNCTION(BlueprintCallable)
    void SetJimakuVisiblity(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetInputBlock(bool InputBlock);
    
    UFUNCTION(BlueprintCallable)
    void SetGameMode(EGameMode GameMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomStageTextToSaveData(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomStageText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPlayerNameID(EPlayerID PlayerID, int32 CustomNameIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCpuLevel(EGameOptionAILevel GameOptionAILevel);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterUnlockDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSelectFinish(int32 PlayerID, bool isFinish);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterRandomFlag(int32 PlayerID, int32 Index, bool isRandom);
    
    UFUNCTION(BlueprintCallable)
    void SetbTournamentPlayerEntered(bool Entered);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleWinRule(EGameOptionBattleWinRule BattleWinRule);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTime(EGameOptionBattleTime BattleTime);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleCharacterCount(int32 PlayerID, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetAssignedControllerID(int32 PlayerID, int32 ControllerId, EDeviceType DeviceType);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimPlaying(bool bPlaying);
    
    UFUNCTION(BlueprintCallable)
    void ResetWinCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetUserInterfaceCursorSpeed();
    
    UFUNCTION(BlueprintCallable)
    void ResetStageBgmCustomize();
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerControllerID();
    
    UFUNCTION(BlueprintCallable)
    bool ReRandomCharacter(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void PendingLoadCharacter(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void LockDLC3();
    
    UFUNCTION(BlueprintCallable)
    void LockDLC2();
    
    UFUNCTION(BlueprintCallable)
    void LockDLC1();
    
    UFUNCTION(BlueprintCallable)
    void LockCostume(ECharacterID Character, ECostumeType CostumeType);
    
    UFUNCTION(BlueprintCallable)
    void LoadStaitcAssetOnce();
    
    UFUNCTION(BlueprintCallable)
    void LoadMobLevel(bool bLoad, bool bHighEnd, FLatentActionInfo LatentActionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockCostumeColor(ECharacterID CharacterID, ECostumeType Costume, ECharaColorID Color) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockCostume(ECharacterID CharacterID, ECostumeType Costume) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockCharacter(ECharacterID charaID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTournamentPlayerEntered() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTournamentModeWinCountComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTournamentMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoryBossBattle() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRestartMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    bool IsOnlineModeWinCountComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJimakuVisiblity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputBlocking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHighEndPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterSelectFinish(int32 PlayerID) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsArabic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllCharacterRandom(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveCharacterSelect() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetWinCount(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ECharacterID> GetUnlockedCharacters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETournamentRule GetTournamentRule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTeamRandomFlag(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageBgmType GetStageBgmType(EStageID StageID);
    
    UFUNCTION(BlueprintCallable)
    FString GetStageBgm(EStageID StageID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageID GetSelectedStageID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedOrder(int32 PlayerID, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECostumeType GetSelectedCostume(int32 PlayerID, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharaColorID GetSelectedColor(int32 PlayerID, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedCharacterCounterBoth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedCharacterCounter(int32 PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterID GetSelectedCharacter(int32 PlayerID, int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    ERequestOpenMenu GetRequestOpenMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ECharacterID> GetReleasedCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ECharacterID> GetRandomUnlockedCharacters(int32 SelectNum, TArray<ECharacterID> ExcludeCharacters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerWorldPosition(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerOperationType GetPlayerOperationType(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleHandicap GetPlayerBattleHandicap(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECostumeType GetOrderedCostume(int32 PlayerID, int32 OrderIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharaColorID GetOrderedColor(int32 PlayerID, int32 OrderIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterID GetOrderedCharacter(int32 PlayerID, int32 OrderIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEntryOperationSide GetOperationSide() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetOpenMenuFlag();
    
    UFUNCTION(BlueprintCallable)
    ESceneName GetOnlineBattleStartSceneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMobLevel(bool bHighEnd) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetMatchingFromTraining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMainViewportWidget* GetMainViewportWidget();
    
    UFUNCTION(BlueprintCallable)
    EOrangeMenuID GetMainMenuID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameModeData GetGameModeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameMode GetGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameInstanceGameParameters* GetGameInstanceGameParameters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameBattleLevelName(EStageID StageID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterID GetFightingCharacterID(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomStageTextFromSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomStageText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomPlayerName(EPlayerID PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCostumeText(ECostumeType CostumeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EContorollerSelectFromGameMode GetContorollerSelectFromGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConnectedInputDeviceNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetColorText(ECharaColorID ColorID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamID GetCharaIDToTeamID(ECharacterID _charaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterRandomFlag(int32 PlayerID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterName(ECharacterID CharID, FText& FirstName, FText& LastName, FText& FullName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ECharacterID, int32> GetCharacterItemIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCharacterColor(ECharacterID CharacterID, ECostumeType CostumeType, ECharaColorID CharaColorID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleCharacterCount(int32 PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDeviceType GetAssignedControllerType(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAssignedControllerID(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool CopyPlayerDataToGameInstance(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    EMovieID ConvertToMovieIDFromGalleryMovieID(EGalleryMovieID MovieID);
    
    UFUNCTION(BlueprintCallable)
    EGalleryVoiceID ConvertToGalleryVoiceIDFromCharacterID(ECharacterID charaID);
    
    UFUNCTION(BlueprintCallable)
    EGalleryMovieID ConvertToGalleryMovieIDFromMovieID(EMovieID MovieID);
    
    UFUNCTION(BlueprintCallable)
    ECharacterID ConvertToCharacterIDFromGalleryVoiceID(EGalleryVoiceID VoiceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPrimaryAssetId> ConvertStageID(EStageID StageID) const;
    
    UFUNCTION(BlueprintPure)
    FPrimaryAssetId ConvertCharacterID(ECharacterID CharacterID, uint8 ColorID) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectedCharacter(const EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void CheckFixSameColor();
    
private:
    UFUNCTION(BlueprintCallable)
    void AvailableCostumeCheck();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddWinCount(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void AddSelectedCharacterCounter(int32 PlayerID, int32 AddNum);
    
};

