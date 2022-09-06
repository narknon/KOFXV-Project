#include "LeaderBoard_Layout.h"

void ULeaderBoard_Layout::SetState(ELeaderboardWindowState State) {
}



void ULeaderBoard_Layout::CloseProfile(int32 PlayerID, EUiOperation Operation) {
}



ULeaderBoard_Layout::ULeaderBoard_Layout() {
    this->IsOpenedLeaderboardWindow = false;
    this->WBP_99_wdw_report = NULL;
    this->IsOpenedLoadingWindow = false;
    this->WBP_03_06_Leaderboard = NULL;
}

