#include "OnlineProfile_PlayerSetting.h"



UOnlineProfile_PlayerSetting::UOnlineProfile_PlayerSetting() {
    this->CursorItem = ECursorItemOnlineProfilePlayerSetting::RankMatchRecord;
    this->isRankMatchRecordReleased = false;
    this->isPersonalReplayRelease = false;
    this->isReplayWinLossDisplay = false;
}

