#include "FindRoomsSettings.h"

FFindRoomsSettings::FFindRoomsSettings() {
    this->AreaSelect = EAreaSelect::Same;
    this->OnlineGameMode = EOnlineGameMode::RankMatch;
    this->RoomMatchRule = EFindOptionRoomMatchRule::RemainingBattle;
    this->BattleContinuousNum = 0;
    this->MemberSelect = EFindOptionMemberSelect::On;
    this->BattleTime = EFindOptionBattleTime::Count60;
    this->BattleWinRule = EFindOptionBattleWinRule::SetCount1;
    this->EnableSubstitute = EFindOptionEnableSubstitute::OK;
    this->PartyFormat = EFindOptionPartyFormat::Fixed;
}

