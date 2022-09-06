#include "BossChallengeData.h"

FBossChallengeData::FBossChallengeData() {
    this->ChallengeID = EBossChallenge::Boss_01;
    this->charaID = ECharacterID::NONE;
    this->StageID = EStageID::TRA_ST;
    this->BossImage = NULL;
    this->FaceImage = NULL;
    this->StageImage = NULL;
    this->EmbremImage = NULL;
}

