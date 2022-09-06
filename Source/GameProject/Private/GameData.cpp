#include "GameData.h"

void UGameData::UnlockNewWorkTitle(ECharacterID charaID) {
}

void UGameData::UnlockListenBGM(const FString& ev_name) {
}

void UGameData::SetTutorialClear(ETutorialID ID, bool flag) {
}

void UGameData::SetTrialLevelClear(ECharacterID ID, ETrialID trialID) {
}

void UGameData::SetTrialClear(ECharacterID ID, bool flag) {
}

void UGameData::SetStageDefault() {
}

void UGameData::SetNetworkTitleCount(ENetworkTitleID ID, int32 Val) {
}

void UGameData::SetFollowLock(int32 ArrayNum, bool Lock) {
}

void UGameData::SetFollowList(FFollow Val) {
}

void UGameData::SetCharacterUnlockSoundDefault() {
}

void UGameData::SetBossChallengeClearChara(EBossChallenge challenge_id, ECharacterID chara_id, bool flag) {
}

void UGameData::SetBossChallengeClear(EBossChallenge challenge_id, bool flag) {
}

void UGameData::SetBossChallengeBestClearTime(EBossChallenge challenge_id, int32 Time) {
}

void UGameData::RemoveFollow(int32 ArrayNum) {
}

bool UGameData::IsUnlockStage(EStageID unlockID) {
    return false;
}

bool UGameData::IsUnlockNetworkTitle(ENetworkTitleID ID) {
    return false;
}

bool UGameData::IsUnlockJacket(EJacketID unlockID) {
    return false;
}

bool UGameData::IsUnlockCharacter(ECharacterID charaID) const {
    return false;
}

bool UGameData::IsUnlockBGM(EBGMID unlockID) {
    return false;
}

bool UGameData::IsChinaVerHide(EJacketID ID, int32 idx) {
    return false;
}

TArray<ECharacterID> UGameData::GetUnlockedCharacters() const {
    return TArray<ECharacterID>();
}

bool UGameData::GetTutorialClear(ETutorialID ID) {
    return false;
}

bool UGameData::GetTrialLevelClear(ECharacterID ID, ETrialID trialID) {
    return false;
}

bool UGameData::GetTrialClear(ECharacterID ID) {
    return false;
}

void UGameData::GetNewMarkStageReset() {
}

bool UGameData::GetNewMarkStage(EStageID unlockID, bool updateFlag) {
    return false;
}

bool UGameData::GetNewMarkNetworkTitle(ENetworkTitleID ID, bool updateFlag) {
    return false;
}

bool UGameData::GetNewMarkJacketBGM(EJacketID ID, int32 bgm_idx, bool updateFlag) {
    return false;
}

bool UGameData::GetNewMarkJacket(EJacketID ID, int32 bgm_max) {
    return false;
}

bool UGameData::GetNewMarkBGM(EBGMID unlockID, bool updateFlag) {
    return false;
}

bool UGameData::GetFollowLock(int32 ArrayNum) {
    return false;
}

TArray<FFollow> UGameData::GetFollowList() {
    return TArray<FFollow>();
}

bool UGameData::GetBossChallengeClearChara(EBossChallenge challenge_id, ECharacterID chara_id) {
    return false;
}

bool UGameData::GetBossChallengeClear(EBossChallenge challenge_id) {
    return false;
}

int32 UGameData::GetBossChallengeBestClearTime(EBossChallenge challenge_id) {
    return 0;
}

void UGameData::DefaultUnlockJacket() {
}

bool UGameData::AddStageCount(EStageID unlockID, int32 Val) {
    return false;
}

bool UGameData::AddNetworkTitleCount(ENetworkTitleID ID, int32 Val) {
    return false;
}

bool UGameData::AddJacketCount(EJacketID unlockID, int32 Val) {
    return false;
}

bool UGameData::AddBGMCount(EBGMID unlockID, int32 Val) {
    return false;
}

UGameData::UGameData() {
    this->LaunchCount = 0;
    this->AchievementClearCheck = NULL;
    this->AchievementCount.AddDefaulted(49);
    this->CustomPlayerNameList.AddDefaulted(33);
    this->SelectedCustomListIndex = 0;
    this->CustomListArray.AddDefaulted(3);
    this->bRankMatchRecordPublicSetting = true;
    this->bOnlineReplayPublicSetting = true;
    this->bReplayDisplayResults = false;
    this->SavedataVersion = 1;
    this->AccountIdHash = 0;
}

