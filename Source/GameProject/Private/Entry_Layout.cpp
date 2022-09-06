#include "Entry_Layout.h"

bool UEntry_Layout::TemporaryAssignPlayerConttoler(int32 PlayerID, int32 ControllerId, bool IsKeyBoard) {
    return false;
}

void UEntry_Layout::SetCursorToCurrentSection() {
}

void UEntry_Layout::InitControllerAssign() {
}

void UEntry_Layout::EntrySkipToSection_Implementation(EEnterStep ToStep) {
}

void UEntry_Layout::ControllerSelectEntry(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_Layout::ControllerSelectConfirm_R(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_Layout::ControllerSelectConfirm_L(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_Layout::ControllerSelectCancel_R(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_Layout::ControllerSelectCancel_L(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_Layout::BacktoMainMenu(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_Layout::AssignPlayerConttoler() {
}

UEntry_Layout::UEntry_Layout() {
    this->WBP_ANIM_wdw_A_EntryMode = NULL;
    this->WBP_92_00_ControllerSide_L = NULL;
    this->WBP_92_00_ControllerSide_R = NULL;
    this->WBP_99_wdw_Confirm = NULL;
    this->ControllerSideAry.AddDefaulted(2);
}

