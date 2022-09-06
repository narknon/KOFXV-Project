#include "ReplayRoundInfo.h"

FReplayRoundInfo::FReplayRoundInfo() {
    this->winner = EBattleRoundWinner::Player1;
    this->finishType = EBattleRoundFinishType::KO;
    this->RandomSeed = 0;
}

