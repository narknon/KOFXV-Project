#include "PlayerData.h"

FPlayerData::FPlayerData() {
    this->SelectedCharacterCounter = 0;
    this->BattleCharacterCount = 0;
    this->PlayerOperationType = EPlayerOperationType::Human;
    this->BattleHandicap = EBattleHandicap::Level1;
    this->bTeamRandom = false;
    this->bCharacterSelectFinished = false;
}

