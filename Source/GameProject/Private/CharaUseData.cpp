#include "CharaUseData.h"

FCharaUseData::FCharaUseData() {
    this->charaID = ECharacterID::NONE;
    this->CharaSelectNumber = 0;
    this->UseCharaCount = 0;
    this->UseColorCount[0] = 0;
    this->UseColorCount[1] = 0;
    this->UseColorCount[2] = 0;
    this->UseColorCount[3] = 0;
    this->WinCount = 0;
    this->StoryClearCount = 0;
    this->StoryNoContinueClearCount = 0;
}

