#include "PlayerCharacterStatus.h"

FPlayerCharacterStatus::FPlayerCharacterStatus() {
    this->CharacterID = ECharacterID::NONE;
    this->CharacterColorID = ECharaColorID::NONE;
    this->Gender = ECharacterStatusGender::Male;
    this->Physique = ECharacterStatusPhysique::Normal;
}

