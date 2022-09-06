#include "TrainingModeParam.h"

FTrainingModeParam::FTrainingModeParam() {
    this->startPosition = ETrainingStartPosition::Left;
    this->bStartPositionReverse = false;
    this->playSide = ETrainingPlaySide::Normal;
    this->action = ETrainingAction::Stand;
    this->guard = ETrainingGuardSetting::Off;
    this->counter = ETrainingCounter::Off;
    this->downevade = ETrainingDownEvade::Off;
    this->bVisibleKeyData = false;
    this->bVisibleAttackData = false;
    this->bVisibleHud = false;
    this->vitals[0] = ETrainingVital::Normal;
    this->vitals[1] = ETrainingVital::Normal;
    this->player1power = false;
    this->player2power = false;
    this->PowerGauge[0] = 0;
    this->PowerGauge[1] = 0;
    this->maxpowergauge[0] = 0;
    this->maxpowergauge[1] = 0;
    this->player1maxmode = false;
    this->player2maxmode = false;
    this->maxmodetime[0] = 0;
    this->maxmodetime[1] = 0;
    this->player1guardsetting = false;
    this->player2guardsetting = false;
    this->guardgauge[0] = 0;
    this->guardgauge[1] = 0;
    this->player1stunsetting = false;
    this->player2stunsetting = false;
    this->stungauge[0] = 0;
    this->stungauge[1] = 0;
    this->recordingType = ETrainingRecordingType::Normal;
    this->recordingSlot = ETrainingRecordingSlot::Off;
    this->recordingSlotPlayModes[0] = ETrainingRecordingSlotPlayMode::Off;
    this->recordingSlotPlayModes[1] = ETrainingRecordingSlotPlayMode::Off;
    this->recordingSlotPlayModes[2] = ETrainingRecordingSlotPlayMode::Off;
    this->recordingSlotPlayModes[3] = ETrainingRecordingSlotPlayMode::Off;
    this->recordingSlotPlayModes[4] = ETrainingRecordingSlotPlayMode::Off;
    this->reversalPlayTiming = ETrainingReversalPlayTaiming::All;
    this->charaID[0] = ECharacterID::NONE;
    this->charaID[1] = ECharacterID::NONE;
    this->StageID = EStageID::TRA_ST;
    this->bgmSetting = EBgmSetting::Default;
}

