#include "RoomListWindow.h"

void URoomListWindow::SetOpenedWindowFlag(bool flag) {
}

void URoomListWindow::SetOnlineGameMode(const EOnlineGameMode& Mode) {
}

bool URoomListWindow::IsOpenedWindow() {
    return false;
}

EOnlineGameMode URoomListWindow::GetOnlineGameMode() {
    return EOnlineGameMode::RankMatch;
}

URoomListWindow::URoomListWindow() {
    this->GuideWindow = NULL;
    this->RoomListScrollBox = NULL;
    this->WBP_99_wdw_report = NULL;
}

