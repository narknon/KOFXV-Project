#include "Entry_TournamentSetting.h"



int32 UEntry_TournamentSetting::GetTournamentSettingCursorIndex() {
    return 0;
}

int32 UEntry_TournamentSetting::GetSettingSwitchCursorIndex() {
    return 0;
}

UEntry_TournamentSetting::UEntry_TournamentSetting() {
    this->WBP_Setting_Switch = NULL;
    this->WBP_99_itemA_Confirm_0 = NULL;
    this->LastTournamentSettingCursor = 0;
    this->LastSettingSwitchCursor = 0;
}

