#include "OptionGameInfo.h"

FOptionGameInfo::FOptionGameInfo() {
    this->winRuleStory = EGameOptionBattleWinRule::SetCount1;
    this->winRuleGhost = EGameOptionBattleWinRule::SetCount1;
    this->winRuleVersus = EGameOptionBattleWinRule::SetCount1;
    this->BattleTime = EGameOptionBattleTime::Count60;
    this->battleTimeStory = EGameOptionBattleTime::Count60;
    this->aiLevel = EGameOptionAILevel::VeryEasy;
    this->aiLevelStory = EGameOptionAILevel::VeryEasy;
}

