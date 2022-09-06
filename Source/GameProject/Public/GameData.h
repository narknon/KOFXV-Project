#pragma once
#include "CoreMinimal.h"
#include "SaveData.h"
#include "CustomListInfo.h"
#include "EStageID.h"
#include "GalleryUnlock.h"
#include "SoundUnlock.h"
#include "OnlineProfileUploadData.h"
#include "StoryLeaderboardData.h"
#include "Follow.h"
#include "ECharacterID.h"
#include "MyRankingStoryClearData.h"
#include "StageData.h"
#include "NetworkData.h"
#include "NetworkTitleUnlock.h"
#include "StageCustomSoundInfo.h"
#include "JacketUnlock.h"
#include "StageUnlock.h"
#include "ETeamID.h"
#include "RankMatchData.h"
#include "FairPlayScoreWindow.h"
#include "TutorialClear.h"
#include "TrialClear.h"
#include "DecideRankBattleBase.h"
#include "StoryContinueData.h"
#include "EBossChallenge.h"
#include "BossChallengeClearData.h"
#include "BossChallengeLeaderboardData.h"
#include "ActivityData.h"
#include "ECostumeType.h"
#include "ETutorialID.h"
#include "ETrialID.h"
#include "ENetworkTitleID.h"
#include "EJacketID.h"
#include "EBGMID.h"
#include "GameData.generated.h"

class UAchievementData;

UCLASS(Blueprintable)
class GAMEPROJECT_API UGameData : public USaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LaunchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAchievementData* AchievementClearCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AchievementCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RetryUnlockAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineProfileUploadData OnlineProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFollow> FollowList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMyRankingStoryClearData> StoryClearRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> CustomPlayerNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageID, FStageData> StageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, bool> PlayedCharaterUnlockDJVoiceTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, bool> PlayedCharaterUnlockDJVoiceSingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkData NetworkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkTitleUnlock NetworkTitleUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundUnlock SoundUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJacketUnlock JacketUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageUnlock StageUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankMatchData RankMatchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairPlayScoreWindow FairPlayerScoreWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedCustomListIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomListInfo> CustomListArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageCustomSoundInfo StageSelectSoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialClear TutorialClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrialClear TrialClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRankMatchRecordPublicSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlineReplayPublicSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplayDisplayResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETeamID> StoryClearOfficialTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecideRankBattleBase DecideRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBossChallenge, FBossChallengeClearData> BossChallengeInfoList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryContinueData StoryContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryLeaderboardData StoryLeaderboardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBossChallenge, FBossChallengeLeaderboardData> BossChallengeLeaderboardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGalleryUnlock GalleryUnlock;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivityData ActivityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchID;
    
    UPROPERTY(EditAnywhere)
    uint64 AccountIdHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, ECostumeType> CharacterArrange01Unlock;
    
public:
    UGameData();
    UFUNCTION(BlueprintCallable)
    void UnlockNewWorkTitle(ECharacterID charaID);
    
    UFUNCTION(BlueprintCallable)
    void UnlockListenBGM(const FString& ev_name);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialClear(ETutorialID ID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetTrialLevelClear(ECharacterID ID, ETrialID trialID);
    
    UFUNCTION(BlueprintCallable)
    void SetTrialClear(ECharacterID ID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetStageDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkTitleCount(ENetworkTitleID ID, int32 Val);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowLock(int32 ArrayNum, bool Lock);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowList(FFollow Val);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterUnlockSoundDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetBossChallengeClearChara(EBossChallenge challenge_id, ECharacterID chara_id, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBossChallengeClear(EBossChallenge challenge_id, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBossChallengeBestClearTime(EBossChallenge challenge_id, int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFollow(int32 ArrayNum);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockStage(EStageID unlockID);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockNetworkTitle(ENetworkTitleID ID);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockJacket(EJacketID unlockID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockCharacter(ECharacterID charaID) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockBGM(EBGMID unlockID);
    
    UFUNCTION(BlueprintCallable)
    bool IsChinaVerHide(EJacketID ID, int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ECharacterID> GetUnlockedCharacters() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTutorialClear(ETutorialID ID);
    
    UFUNCTION(BlueprintCallable)
    bool GetTrialLevelClear(ECharacterID ID, ETrialID trialID);
    
    UFUNCTION(BlueprintCallable)
    bool GetTrialClear(ECharacterID ID);
    
    UFUNCTION(BlueprintCallable)
    void GetNewMarkStageReset();
    
    UFUNCTION(BlueprintCallable)
    bool GetNewMarkStage(EStageID unlockID, bool updateFlag);
    
    UFUNCTION(BlueprintCallable)
    bool GetNewMarkNetworkTitle(ENetworkTitleID ID, bool updateFlag);
    
    UFUNCTION(BlueprintCallable)
    bool GetNewMarkJacketBGM(EJacketID ID, int32 bgm_idx, bool updateFlag);
    
    UFUNCTION(BlueprintCallable)
    bool GetNewMarkJacket(EJacketID ID, int32 bgm_max);
    
    UFUNCTION(BlueprintCallable)
    bool GetNewMarkBGM(EBGMID unlockID, bool updateFlag);
    
    UFUNCTION(BlueprintCallable)
    bool GetFollowLock(int32 ArrayNum);
    
    UFUNCTION(BlueprintCallable)
    TArray<FFollow> GetFollowList();
    
    UFUNCTION(BlueprintCallable)
    bool GetBossChallengeClearChara(EBossChallenge challenge_id, ECharacterID chara_id);
    
    UFUNCTION(BlueprintCallable)
    bool GetBossChallengeClear(EBossChallenge challenge_id);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBossChallengeBestClearTime(EBossChallenge challenge_id);
    
    UFUNCTION(BlueprintCallable)
    void DefaultUnlockJacket();
    
    UFUNCTION(BlueprintCallable)
    bool AddStageCount(EStageID unlockID, int32 Val);
    
    UFUNCTION(BlueprintCallable)
    bool AddNetworkTitleCount(ENetworkTitleID ID, int32 Val);
    
    UFUNCTION(BlueprintCallable)
    bool AddJacketCount(EJacketID unlockID, int32 Val);
    
    UFUNCTION(BlueprintCallable)
    bool AddBGMCount(EBGMID unlockID, int32 Val);
    
};

