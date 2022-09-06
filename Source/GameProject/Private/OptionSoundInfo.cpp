#include "OptionSoundInfo.h"

FOptionSoundInfo::FOptionSoundInfo() {
    this->soundVolumeMaster = 0;
    this->soundVolumeBGM = 0;
    this->soundVolumeStageSE = 0;
    this->soundVolumeSE = 0;
    this->soundVolumeCharacterVoice = 0;
    this->soundVolumeSystemVoice = 0;
    this->soundVolumePad = 0;
    this->speakerModeFlag = false;
    this->announceStyle = EAnnounceStyle::Exciting;
}

