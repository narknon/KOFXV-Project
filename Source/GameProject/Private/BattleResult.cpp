#include "BattleResult.h"

FBattleResult::FBattleResult() {
    this->winner = EBattleRoundWinner::Player1;
    this->useCharacterP1 = ECharacterID::NONE;
    this->useCharacterP2 = ECharacterID::NONE;
    this->finishType = EBattleRoundFinishType::KO;
}

