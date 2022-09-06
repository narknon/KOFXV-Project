#include "GameInfo.h"

FGameInfo::FGameInfo() {
    this->m_GameMode = EGameMode::GAME_MODE_VERSUS;
    this->m_GameModeSub = EGameModeSub::NONE;
    this->winGameCountP1 = 0;
    this->winGameCountP2 = 0;
    this->drawGameCount = 0;
    this->killStreakP1 = 0;
    this->killStreakP2 = 0;
    this->battleHandicapP1 = EBattleHandicap::Level1;
    this->battleHandicapP2 = EBattleHandicap::Level1;
}

