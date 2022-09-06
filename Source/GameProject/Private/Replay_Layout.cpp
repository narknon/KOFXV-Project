#include "Replay_Layout.h"

void UReplay_Layout::StartReplayBattle() {
}

void UReplay_Layout::OnCheckNetwork_Upload(ECheckOnlineResult Result) {
}

void UReplay_Layout::CloseProfile(int32 PlayerID, EUiOperation Operation) {
}

void UReplay_Layout::CheckNetwork_Upload() {
}

void UReplay_Layout::CanselStartReplay() {
}

UReplay_Layout::UReplay_Layout() {
    this->WBP_03_03_ReplayList = NULL;
    this->WBP_03_03_ReplayInfo = NULL;
    this->WBP_03_03_FilteringMenu = NULL;
    this->WBP_95_01_selector = NULL;
    this->WBP_99_wdw_report = NULL;
    this->NowWindow = EActiveReplayWindow::None;
    this->CurrentReplay = NULL;
}

