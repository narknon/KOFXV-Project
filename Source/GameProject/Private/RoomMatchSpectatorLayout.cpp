#include "RoomMatchSpectatorLayout.h"

void URoomMatchSpectatorLayout::UpdateMemberListInfo() {
}

void URoomMatchSpectatorLayout::UpdateChatNotification(int32 InNotificationCount) {
}

void URoomMatchSpectatorLayout::OnSelectedCharacterDispatcher(EPlayerID InPlayerID, int32 InCharacterIndex, ECharacterID InCharacterID, ECharaColorID InCharaColorID, int32 InCharaCostumeID) {
}

void URoomMatchSpectatorLayout::OnJoinedNewMember(int32 JoinedMember) {
}

void URoomMatchSpectatorLayout::OnChangedRoomStatus() {
}

URoomMatchSpectatorLayout::URoomMatchSpectatorLayout() {
    this->WBP_GuideItemArray = NULL;
    this->WBP_03_07_MemberList = NULL;
    this->WBP_03_07_Chat = NULL;
    this->WBP_03_07_RoomMenu = NULL;
    this->WBP_03_07_latestComments = NULL;
    this->GameInstanceGameParameters = NULL;
}

