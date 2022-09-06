#include "NewSoundManager.h"

UNewSoundManager::UNewSoundManager() {
    this->default_listener_akcomponent_ = NULL;
    this->soundlist_bgm_akcomponent_ = NULL;
    this->system_akcomponent_ = NULL;
    this->system_character_voice_akcomponent_ = NULL;
    this->battle_common_akcomponents_[0] = NULL;
    this->battle_common_akcomponents_[1] = NULL;
    this->battle_character_attack_akcomponents_[0] = NULL;
    this->battle_character_attack_akcomponents_[1] = NULL;
    this->player_depend_akcomponents_[0] = NULL;
    this->player_depend_akcomponents_[1] = NULL;
    this->Pre2DPanPosition[0] = 0.00f;
    this->Pre2DPanPosition[1] = 0.00f;
    this->sound_event_name_banks_instance_ = NULL;
    this->sound_bank_names_instance_ = NULL;
    this->sound_operator_instance_ = NULL;
    this->sub_level_names_.AddDefaulted(19);
    this->FilePackageLoadOrder.AddDefaulted(30);
    this->fighting_game_state_ = NULL;
    this->GameProjectGameInstance = NULL;
    this->djstation_instance_ = NULL;
}

