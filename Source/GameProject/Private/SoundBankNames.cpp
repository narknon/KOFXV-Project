#include "SoundBankNames.h"

FString USoundBankNames::GetStageBankName(EStageID stage_id) {
    return TEXT("");
}

FString USoundBankNames::GetEnvironmentBankName(EStageID stage_id) {
    return TEXT("");
}

FString USoundBankNames::GetCharacterSoundBankName(const int32& character_id) {
    return TEXT("");
}

int32 USoundBankNames::GetCharacterSoundBankArraySize() {
    return 0;
}

USoundBankNames::USoundBankNames() {
    this->sound_bank_names_resident_.AddDefaulted(1);
    this->sound_bank_names_environment_.AddDefaulted(19);
    this->sound_bank_names_stage_.AddDefaulted(18);
    this->character_sound_bank_names_.AddDefaulted(56);
}

