#include "RankMatch_Layout.h"









bool URankMatch_Layout::TemporaryAssignPlayerConttoler(int32 PlayerID, int32 ControllerId) {
    return false;
}

void URankMatch_Layout::SetOpenedTutorialWindowFlag(bool NewIsOpenedTutorialWindow) {
}

void URankMatch_Layout::SetOpenedModeDescriptionWindowFlag(bool flag) {
}

void URankMatch_Layout::SetOpenedMatchingFailureWindowFlag(bool NewIsOpenedMatchingFailureWindow) {
}

void URankMatch_Layout::SetOpenedConfirmWindowFlag(bool IsOpenedCnfirmWindow) {
}

void URankMatch_Layout::SetOpenedBattleConsentWindowFlag(bool NewIsOpenedBattleConsentWindow) {
}

void URankMatch_Layout::SetCursorToCurrentSection() {
}

void URankMatch_Layout::SetConfirmWindowType(EConfirmWindowType Type) {
}







bool URankMatch_Layout::IsOpenedTutorialWindow() {
    return false;
}

bool URankMatch_Layout::IsOpenedModeDescriptionWindow() {
    return false;
}

bool URankMatch_Layout::IsOpenedMatchingFailureWindow() {
    return false;
}

bool URankMatch_Layout::IsOpenedConfirmWindow() {
    return false;
}

bool URankMatch_Layout::IsOpenedBattleConsentWindow() {
    return false;
}

void URankMatch_Layout::InitControllerAssign() {
}

void URankMatch_Layout::GotoWaitTrainingMode(int32 PlayerID, EUiOperation Operation) {
}

ERankDanni URankMatch_Layout::GetRankDanni(const EPlayerID& PlayerID) {
    return ERankDanni::Nyumonsha;
}

EConfirmWindowType URankMatch_Layout::GetConfirmWindowType() {
    return EConfirmWindowType::TutorialSelect;
}

void URankMatch_Layout::EntrySkipToSection_Implementation(EEnterStep ToStep) {
}




void URankMatch_Layout::ControllerSelectEntry(int32 PlayerID, EUiOperation Operation) {
}

void URankMatch_Layout::ControllerSelectConfirm_R(int32 PlayerID, EUiOperation Operation) {
}

void URankMatch_Layout::ControllerSelectConfirm_L(int32 PlayerID, EUiOperation Operation) {
}

void URankMatch_Layout::ControllerSelectCancel_R(int32 PlayerID, EUiOperation Operation) {
}

void URankMatch_Layout::ControllerSelectCancel_L(int32 PlayerID, EUiOperation Operation) {
}


void URankMatch_Layout::CloseSystemWindow() {
}






void URankMatch_Layout::BacktoMainMenu(int32 PlayerID, EUiOperation Operation) {
}

void URankMatch_Layout::AssignPlayerConttoler() {
}

URankMatch_Layout::URankMatch_Layout() {
    this->WBP_03_00_setting = NULL;
    this->WBP_03_Tutorial_progress = NULL;
}

