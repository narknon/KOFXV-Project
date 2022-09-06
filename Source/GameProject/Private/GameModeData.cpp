#include "GameModeData.h"

FGameModeData::FGameModeData() {
    this->GameMode = EGameMode::GAME_MODE_VERSUS;
    this->bTeamBattle = false;
    this->EntryOperationSide = EEntryOperationSide::EOS_P1vP2;
    this->SelectedBattleWinRule = EGameOptionBattleWinRule::SetCount1;
    this->SelectedBattleTime = EGameOptionBattleTime::Count60;
    this->CpuLevel = EGameOptionAILevel::VeryEasy;
}

