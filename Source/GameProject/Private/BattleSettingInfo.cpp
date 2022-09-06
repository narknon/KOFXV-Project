#include "BattleSettingInfo.h"

FBattleSettingInfo::FBattleSettingInfo() {
    this->entryTeamIndex = 0;
    this->entryTeamStg = EStageID::TRA_ST;
    this->entryTeamJacketID = EJacketID::KOF94;
    this->entryTeamSoundIdx = 0;
    this->entryCharaIndex = 0;
    this->entryCharaStg = EStageID::TRA_ST;
    this->entryCharaJacketID = EJacketID::KOF94;
    this->entryCharaSoundIdx = 0;
    this->entryTitleID = ENetworkTitleID::ID01;
}

