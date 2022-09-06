#include "BattleState.h"

FBattleState::FBattleState() {
    this->m_winRule = EGameOptionBattleWinRule::SetCount1;
    this->m_teamMemberCountP1 = 0;
    this->m_teamMemberCountP2 = 0;
    this->m_roundCountTotal = 0;
}

