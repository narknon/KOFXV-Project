#include "GameOptionData.h"

FGameOptionData::FGameOptionData() {
    this->aiLevel = EGameOptionAILevel::VeryEasy;
    this->BattleWinRule = EGameOptionBattleWinRule::SetCount1;
    this->BattleTime = EGameOptionBattleTime::Count60;
    this->m_bGameOptionPopUp = false;
}

