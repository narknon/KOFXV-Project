#include "RankingRecord.h"

URankingRecord::URankingRecord() {
    this->Rank = -1;
    this->Country = 0;
    this->Shougou = 0;
    this->Dani = 0;
    this->ChrIndex = 0;
    this->Score = 0;
    this->NetworkDisconnectLevel = ENetworkDisconnectLevel::NONE;
    this->AccountID = 0;
}

