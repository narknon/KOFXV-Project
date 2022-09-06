#include "RoomWindow.h"

void URoomWindow::UpdateSeatInformation() {
}

void URoomWindow::UpdateRoomInformation() {
}

void URoomWindow::UpdateMyStatus() {
}

void URoomWindow::UpdateMemberListInfo() {
}

void URoomWindow::UpdateCountDownStatus() {
}

void URoomWindow::UpdateChatNotification(int32 InNotificationCount) {
}

void URoomWindow::UpdateChatInfo() {
}

void URoomWindow::UpdateAlreadyBattleGuide() {
}

void URoomWindow::StopCountDown() {
}

void URoomWindow::StartTravelToMemberSelectScene() {
}

void URoomWindow::StartCountDown() {
}

void URoomWindow::SetOpenedWindowFlag(bool flag) {
}

void URoomWindow::SetOnlineGameMode(const EOnlineGameMode& Mode) {
}

void URoomWindow::ResetCountDown() {
}

void URoomWindow::RequestUpdateRoomInformation() {
}




void URoomWindow::OnSelectedBattleMemberDispatcher() {
}

void URoomWindow::OnJoinedNewMember(int32 JoinedMember) {
}

void URoomWindow::OnChangedRoomStatus() {
}

void URoomWindow::OnCannotStartBattle() {
}

bool URoomWindow::IsOpenedWindow() {
    return false;
}

bool URoomWindow::IsCursorOnAnotherPlayer() {
    return false;
}

void URoomWindow::InitCountDown() {
}

void URoomWindow::GuideUpdate() {
}

EOnlineGameMode URoomWindow::GetOnlineGameMode() {
    return EOnlineGameMode::RankMatch;
}

void URoomWindow::EndSeatShuffleAnimation() {
}

void URoomWindow::EndCountDown() {
}

void URoomWindow::CloseProfileDelegate() {
}

void URoomWindow::AdvanceCountDown(float Seconds) {
}

URoomWindow::URoomWindow() {
    this->WBP_03_07_Table = NULL;
    this->WidgetSwitcher_R = NULL;
    this->WBP_03_07_Chat = NULL;
    this->WBP_03_07_MemberList = NULL;
    this->WBP_03_07_latestComments = NULL;
    this->WBP_03_07_RoomMenu = NULL;
    this->GameInstanceGameParameters = NULL;
}

