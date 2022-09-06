#include "CreateRoomSettings.h"

FCreateRoomSettings::FCreateRoomSettings() {
    this->RoomMemberNumMax = 0;
    this->RoomMatchComment = ERoomMatchComment::Beginner;
    this->OnlineGameMode = EOnlineGameMode::RankMatch;
    this->RoomMatchRule = ERoomMatchBattleRule::RemainingBattle;
    this->BattleContinuousNum = 0;
    this->bEnabledMemberSelect = false;
    this->BattleTime = EGameOptionBattleTime::Count60;
    this->BattleWinRule = EGameOptionBattleWinRule::SetCount1;
    this->bEnableSubstitute = false;
    this->bIsShuffle = false;
    this->bIsOpen = false;
    this->bSearchableByRoomID = false;
}

