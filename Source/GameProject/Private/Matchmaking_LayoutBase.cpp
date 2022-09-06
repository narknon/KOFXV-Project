#include "Matchmaking_LayoutBase.h"

void UMatchmaking_LayoutBase::StartTutorialBattle(int32 PlayerID, EUiOperation Operation) {
}

void UMatchmaking_LayoutBase::PreCompletedRankMatching() {
}

void UMatchmaking_LayoutBase::OpenBattleSetting() {
}

void UMatchmaking_LayoutBase::OnSelectedCharacterDispatcher(EPlayerID PlayerID, int32 CharacterIndex, ECharacterID CharacterID, ECharaColorID CharaColorID, int32 CharaCostumeID) {
}

void UMatchmaking_LayoutBase::OnSelectedBattleMemberDispatcher() {
}

void UMatchmaking_LayoutBase::OnMatchingAccepted(bool bEveryonAccepted) {
}

void UMatchmaking_LayoutBase::OnCloseBattleSetting(int32 PlayerID, EUiOperation Operation) {
}

void UMatchmaking_LayoutBase::OnBattleConsentTimeUp() {
}


void UMatchmaking_LayoutBase::DelegateOnMatchingAcceptedDispather(bool IsSuccessfulMatching) {
}

void UMatchmaking_LayoutBase::CompletedRankMatching(bool IsMatchingComplited, int32 LocalPlayerNumber, int32 OpponentPlayerNumber) {
}

UMatchmaking_LayoutBase::UMatchmaking_LayoutBase() {
    this->AgreementWindow = NULL;
    this->BattleSettingGuide = NULL;
    this->OnlineGameSubsystem = NULL;
    this->SceneMgtGameInstance = NULL;
}

