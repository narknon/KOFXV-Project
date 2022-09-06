#include "SoundEventNameBanks.h"

FString USoundEventNameBanks::GetVersusSceneTeamAnnounceVoiceEventName(ETeamID InTeamID) {
    return TEXT("");
}

FString USoundEventNameBanks::GetTeamBGMEventName(const int32& bgm_id) {
    return TEXT("");
}

FString USoundEventNameBanks::GetEnvironmentEventName(EEnvironment_ID environment_id) {
    return TEXT("");
}

FString USoundEventNameBanks::GetEnvironmentBankName(EStageID stage_id) {
    return TEXT("");
}

FString USoundEventNameBanks::GetCrossTalkBGMEventName(const ECharacterID& player_1_chracter, const ECharacterID& player_2_chracter) {
    return TEXT("");
}

FString USoundEventNameBanks::GetBGMEventName(const int32& bgm_id) {
    return TEXT("");
}

USoundEventNameBanks::USoundEventNameBanks() {
    this->sound_bank_names_resident_.AddDefaulted(2);
    this->sound_bank_names_environment_.AddDefaulted(1);
    this->bgm_event_names_.AddDefaulted(22);
    this->team_bgm_event_names_.AddDefaulted(19);
    this->environment_event_names_.AddDefaulted(1);
    this->VersusSceneTeamAnnounceVoiceArray.AddDefaulted(19);
}

