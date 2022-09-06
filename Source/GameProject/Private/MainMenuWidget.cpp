#include "MainMenuWidget.h"

void UMainMenuWidget::OnCompCheckOnlineReplay(ECheckOnlineResult Result) {
}

void UMainMenuWidget::OnCompCheckOnlineLeaderBoard(ECheckOnlineResult IsOnlineModeStart) {
}


void UMainMenuWidget::InitChinaVer() {
}

void UMainMenuWidget::DecideBossChallengeLayout(int32 PlayerID, EUiOperation Operation) {
}

void UMainMenuWidget::CloseTutorialLayout(int32 PlayerID, EUiOperation Operation) {
}

void UMainMenuWidget::CloseTrialLayout(int32 PlayerID, EUiOperation Operation) {
}

void UMainMenuWidget::CloseSystemWindow() {
}

void UMainMenuWidget::CloseReplayDescription() {
}

void UMainMenuWidget::CloseReplay(int32 PlayerID, EUiOperation Operation) {
}

void UMainMenuWidget::CloseProfile(int32 PlayerID, EUiOperation Operation) {
}

void UMainMenuWidget::CloseOption(int32 PlayerID, EUiOperation Operation) {
}

void UMainMenuWidget::CloseLeaderBoard(int32 PlayerID, EUiOperation Operation) {
}

void UMainMenuWidget::CloseGallery(int32 PlayerID, EUiOperation Operation) {
}

void UMainMenuWidget::CloseButtonConfig(int32 PlayerID, EUiOperation Operation) {
}

void UMainMenuWidget::CloseBossChallengeLayout(int32 PlayerID, EUiOperation Operation) {
}

void UMainMenuWidget::CloseBattleSetting(int32 PlayerID, EUiOperation Operation) {
}

UMainMenuWidget::UMainMenuWidget() {
    this->BP_TextBlock_mainmenu = NULL;
    this->BP_TextBlock_online = NULL;
    this->WBP_01_ModeMenu = NULL;
    this->WBP_99_guide_Layout = NULL;
    this->WBP_03_06_Leaderboard_Layout = NULL;
    this->WBP_09_Gallery_Layout = NULL;
    this->WBP_10_Option_Layout = NULL;
    this->WBP_07_Mission_Trial_Layout = NULL;
    this->WBP_07_Mission_BossChallenge_Layout = NULL;
    this->WBP_06_Tutorial_Layout = NULL;
    this->WBP_99_PlayGo_install = NULL;
}

