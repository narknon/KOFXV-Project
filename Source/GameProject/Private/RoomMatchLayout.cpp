#include "RoomMatchLayout.h"

void URoomMatchLayout::OpenBattleSetting() {
}

void URoomMatchLayout::OnSelectedBattleMemberDispatcher() {
}

void URoomMatchLayout::OnChangedRoomStatus() {
}

void URoomMatchLayout::EndProcessRoomMatch() {
}

void URoomMatchLayout::CloseBattleSetting(int32 PlayerID, EUiOperation Operation) {
}

URoomMatchLayout::URoomMatchLayout() {
    this->WBP_GuideItemArray = NULL;
    this->WBP_GuideItemArrayHost = NULL;
    this->WBP_03_07_setting = NULL;
    this->WBP_03_07_CommentList = NULL;
    this->WBP_03_07_RoomList = NULL;
    this->WBP_03_07_RoomInfo = NULL;
    this->WBP_03_07_Room = NULL;
    this->WBP_03_07_RoomMenu = NULL;
    this->WBP_ConfirmBox = NULL;
    this->GameInstanceGameParameters = NULL;
}

