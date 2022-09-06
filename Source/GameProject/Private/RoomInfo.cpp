#include "RoomInfo.h"

FRoomInfo::FRoomInfo() {
    this->RoomId = 0;
    this->PlayerNumMax = 0;
    this->PlayerNum = 0;
    this->RoomComment = ERoomMatchComment::Beginner;
    this->OnlineGameMode = EOnlineGameMode::RankMatch;
    this->RoomMatchRule = ERoomMatchBattleRule::RemainingBattle;
    this->BattleContinuousNum = 0;
    this->bEnableMemberSelect = false;
    this->BattleTime = EGameOptionBattleTime::Count60;
    this->BattleWinRule = EGameOptionBattleWinRule::SetCount1;
    this->bEnableSubstitute = false;
    this->bIsShuffle = false;
    this->bFromRankRoomMatch = false;
    this->bFromCasualRoomMatch = false;
}

