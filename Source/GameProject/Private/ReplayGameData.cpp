#include "ReplayGameData.h"

FReplayGameData::FReplayGameData() {
    this->BattleResult = EBattleResult::NONE;
    this->WinRule = EGameOptionBattleWinRule::SetCount1;
    this->stage = EStageID::TRA_ST;
    this->TimeCount = EGameOptionBattleTime::Count60;
    this->GameVersion = 0;
    this->GameMode = EGameMode::GAME_MODE_VERSUS;
    this->IsUploadedReplay = false;
    this->IsLock = false;
}

