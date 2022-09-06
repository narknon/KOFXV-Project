#include "RoomMenuInfo.h"

FRoomMenuInfo::FRoomMenuInfo() {
    this->CursorIndex = ERoomMenuCursorIndex::BattleSetting;
    this->PreCursorIndex = ERoomMenuCursorIndex::BattleSetting;
    this->bIsEnableBreakTime = false;
    this->bIsEnableChat = false;
    this->bIsEnableNewNotification = false;
    this->bIsEnableSystemNotification = false;
    this->bIsEnablePlayer1BGMCustomize = false;
}

