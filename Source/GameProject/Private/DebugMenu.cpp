#include "DebugMenu.h"





void ADebugMenu::SetDebugValueList(FDebugSettingInfo settingInfo) {
}

void ADebugMenu::SetDebugMenuState(bool _bDebugMenuOpen) {
}





int32 ADebugMenu::GetPageMax() {
    return 0;
}

int32 ADebugMenu::GetDebugLevel() {
    return 0;
}

bool ADebugMenu::GetDebugFlagsForId(EActionDebugFlagId ID) {
    return false;
}

FDebugFlagData ADebugMenu::GetDebugFlags(int32 Index) {
    return FDebugFlagData{};
}

EFlagDataType ADebugMenu::GetDataType(int32 Index) {
    return EFlagDataType::BOOL;
}



bool ADebugMenu::DebugMenuSetting(bool _bExternPauseFlag) {
    return false;
}

void ADebugMenu::DebugMenuAgainConfig() {
}


void ADebugMenu::CloseDebugMenu() {
}

FString ADebugMenu::ChooseFile(bool bForSaving) {
    return TEXT("");
}

bool ADebugMenu::CheckRowNumberRestart(int32 _iDebugRowNumber) {
    return false;
}

void ADebugMenu::CallGameDebugFunction() {
}

void ADebugMenu::ActionDebugKeySetting(bool isPause) {
}

void ADebugMenu::ActionDebugCursor(bool _bRightKey, bool is_selected_with_cursor, int32 _iDebugRowNumber, bool _l2, bool _r2) {
}

ADebugMenu::ADebugMenu() {
    this->debugTime = 0;
    this->isDrawDebugRect = false;
    this->DebugStateString.AddDefaulted(57);
    this->AvatarTest = NULL;
}

