#include "SoundManager.h"









void ASoundManager::SetUpdateIMSoundParameter(bool flg) {
}

void ASoundManager::SetPlayVoiceSuccessFlg(bool flg) {
}

void ASoundManager::SetNoSoundPlay(bool flg) {
}

void ASoundManager::SetIsPlayingGalleryVoice(bool flg) {
}

void ASoundManager::SetIsNoOptionSound(bool no_option_flg) {
}

void ASoundManager::SetIsFinishBGM(bool flg) {
}


void ASoundManager::SetFinishedPlayResultVoice(bool result_flg) {
}


void ASoundManager::SetExecutePanFlg(bool execute_pan) {
}

void ASoundManager::SetExecutedPlayResultVoice(bool executed_flg) {
}

void ASoundManager::SetCrossTalkFinish(bool cross_talk_flg) {
}



void ASoundManager::RequestStopAllBGM() {
}








void ASoundManager::RemoveSoundPosEffect(EPlayerID player_id, int32 target_index) {
}

void ASoundManager::RemovePlayedVoiceOptionInfo(int32 player_id, const FString& event_name) {
}











TArray<int32> ASoundManager::LoadOptionSoundVolumeInfo() {
    return TArray<int32>();
}

bool ASoundManager::IsPlayVoiceSuccess() {
    return false;
}

bool ASoundManager::IsFinishedPlayResultVoice() {
    return false;
}

bool ASoundManager::IsCrossTalkFinish() {
    return false;
}




bool ASoundManager::GetUpdateIMSoundParameter() {
    return false;
}

FVector2D ASoundManager::GetSoundPosEffect(EPlayerID player_id, int32 target_index) {
    return FVector2D{};
}

bool ASoundManager::GetNoSoundPlay() {
    return false;
}

bool ASoundManager::GetIsPlayingGalleryVoice() {
    return false;
}

bool ASoundManager::GetIsNoOptionSound() {
    return false;
}

bool ASoundManager::GetIsFinishBGM() {
    return false;
}

bool ASoundManager::GetExecutePanFlg() {
    return false;
}

bool ASoundManager::GetExecutedPlayResultVoice() {
    return false;
}

int32 ASoundManager::GetCharacterWeaponMaterial(EPlayerID player_id) {
    return 0;
}


ASoundManager::ASoundManager() {
    this->selected_stage_id_ = EStageID::TRA_ST;
    this->system_se_event_names_.AddDefaulted(18);
}

