#include "DebugDemoTestSaveData.h"

UDebugDemoTestSaveData::UDebugDemoTestSaveData() {
    this->sceneType = -1;
    this->character1 = ECharacterID::NONE;
    this->character2 = ECharacterID::NONE;
    this->characterColor1 = ECharaColorID::NONE;
    this->characterColor2 = ECharaColorID::NONE;
    this->characterCostume1 = ECostumeType::Standard;
    this->characterCostume2 = ECostumeType::Standard;
    this->stage = EStageID::NONE;
}

