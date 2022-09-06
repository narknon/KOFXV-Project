#include "OnlineWaitingWidget.h"


void UOnlineWaitingWidget::OnSelectedCharacterDispatcher(EPlayerID PlayerID, int32 CharacterIndex, ECharacterID CharacterID, ECharaColorID CharaColorID, int32 CharaCostumeID) {
}

void UOnlineWaitingWidget::OnMatchingAccepted(bool IsSuccessfulMatching) {
}

void UOnlineWaitingWidget::MatchmakingCompleted(bool bWasSuccessful, int32 LocalPlayerNumber, int32 OpponentPlayerNumber) {
}

void UOnlineWaitingWidget::MatchingAcceptedByCountdownComp(bool IsSuccessfulMatching) {
}

void UOnlineWaitingWidget::DelegateOnMatchingAcceptedDispather(bool IsSuccessfulMatching) {
}

UOnlineWaitingWidget::UOnlineWaitingWidget() {
    this->WBP_99_icon_waiting_off = NULL;
    this->TextBlock_time = NULL;
    this->WBP_99_icon_waiting_message = NULL;
    this->BP_TextBlock_search = NULL;
    this->BP_TextBlock_matching_message = NULL;
    this->BP_TextBlock_id = NULL;
    this->WBP_icon_lineSpeed = NULL;
    this->WBP_99_icon_quitter = NULL;
    this->WBP_03_agreement_rank = NULL;
}

