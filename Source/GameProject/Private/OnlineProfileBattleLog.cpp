#include "OnlineProfileBattleLog.h"

FOnlineProfileBattleLog::FOnlineProfileBattleLog() {
    this->Senseki = ESensekiLogEntry::Empty;
    this->GameVersion = 0;
    this->IsUploadedReplay = false;
}

