#include "CasualMatch_Layout.h"






void UCasualMatch_Layout::SetOpenedMatchingFailureWindowFlag(bool NewIsOpenedMatchingFailureWindow) {
}

void UCasualMatch_Layout::SetOpenedConfirmWindowFlag(bool IsOpenedCnfirmWindow) {
}

void UCasualMatch_Layout::SetOpenedBattleConsentWindowFlag(bool NewIsOpenedBattleConsentWindow) {
}





bool UCasualMatch_Layout::IsOpenedMatchingFailureWindow() {
    return false;
}

bool UCasualMatch_Layout::IsOpenedConfirmWindow() {
    return false;
}

bool UCasualMatch_Layout::IsOpenedBattleConsentWindow() {
    return false;
}


void UCasualMatch_Layout::GotoWaitTrainingMode(int32 PlayerID, EUiOperation Operation) {
}







UCasualMatch_Layout::UCasualMatch_Layout() {
    this->SettingWindow = NULL;
    this->WBP_03_Tutorial_progress = NULL;
}

