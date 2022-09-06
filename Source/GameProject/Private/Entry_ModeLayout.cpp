#include "Entry_ModeLayout.h"

void UEntry_ModeLayout::WindowUnselOn() {
}

void UEntry_ModeLayout::WindowUnselOff() {
}

void UEntry_ModeLayout::VersusSettingIn() {
}

void UEntry_ModeLayout::VerSusSettingConfirm(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_ModeLayout::TournamentIn() {
}

void UEntry_ModeLayout::TournamentConfirm(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_ModeLayout::SettingToMode(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_ModeLayout::SetCursorToCurrentSection(EEnterStep step) {
}

void UEntry_ModeLayout::PlayerListToTournament(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_ModeLayout::ModeToVersusSetting() {
}

void UEntry_ModeLayout::ModeToTournament() {
}

void UEntry_ModeLayout::ModeLayout_Back(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_ModeLayout::ModeConfirm(int32 PlayerID, EUiOperation Operation) {
}

UEntry_ModeLayout::UEntry_ModeLayout() {
    this->WBP_ANIM_unsel = NULL;
    this->WBP_99_wdwA = NULL;
    this->WidgetSwitcher_contents = NULL;
    this->WBP_92_00_Mode = NULL;
    this->WBP_92_00_VersusSetting = NULL;
    this->WBP_92_00_TournamentSetting = NULL;
    this->WBP_92_00_PlayerList = NULL;
    this->currentWidget = NULL;
}

