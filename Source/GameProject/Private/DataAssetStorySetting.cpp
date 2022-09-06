#include "DataAssetStorySetting.h"

EMovieID UDataAssetStorySetting::GetTeamEndMovieId(ETeamID TeamID) {
    return EMovieID::NONE;
}

EMovieID UDataAssetStorySetting::GetOmakeEndMovieId(ECharacterID Chara1, ECharacterID Chara2, ECharacterID Chara3) {
    return EMovieID::NONE;
}

UDataAssetStorySetting::UDataAssetStorySetting() {
    this->FinalStage = EStageID::TRA_ST;
    this->MediumBossStage = EStageID::TRA_ST;
    this->LastBossStage = EStageID::TRA_ST;
    this->BossBattleStage = EStageID::TRA_ST;
    this->Prologue = EMovieID::NONE;
    this->MidWay = EMovieID::NONE;
    this->MidBossDemoEtc = EMovieID::NONE;
    this->BossDemoEtc = EMovieID::NONE;
    this->BossDemoLostEtc = EMovieID::NONE;
    this->TeamEndDemoEtc = EMovieID::NONE;
    this->Credit1 = EMovieID::NONE;
}

