#include "MatchmakingSettings.h"

FMatchmakingSettings::FMatchmakingSettings() {
    this->OnlineGameMode = EOnlineGameMode::RankMatch;
    this->AntennaSelect = EAntennaSelect::ALL;
    this->RankSelect = ERankSelect::Same;
    this->AreaSelect = EAreaSelect::Same;
}

