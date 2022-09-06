#include "EventMobAnimationInstance.h"

float UEventMobAnimationInstance::EventMobPlayMontage(EMobEventMontageType MobEventMontageType) {
    return 0.0f;
}

UEventMobAnimationInstance::UEventMobAnimationInstance() {
    this->Instance_Ref = NULL;
    this->StartTimeByRandom = 1.00f;
    this->bHitMontageCancel = false;
    this->MontageCancelBlendTime = 0.20f;
    this->bHitMontageCancelHitMontage = false;
    this->LookAtClamp = 65.00f;
    this->InterpSpeed = 3.00f;
    this->bBlendEyeTrack = false;
    this->bDisableEyeTrackOnMontageIsPlaying = false;
    this->EventState = EEventMobState::EMS_IDLE;
}

