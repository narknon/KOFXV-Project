#include "ReplaySearchData.h"

FReplaySearchData::FReplaySearchData() {
    this->Sort = EQueryReplayOrder::RANK_HIGH;
    this->BattleMode = EReplayFilteringBattleMode::None;
    this->BattleRules = EReplayFilteringBattleRules::None;
}

