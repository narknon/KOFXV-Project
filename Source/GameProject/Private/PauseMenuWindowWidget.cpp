#include "PauseMenuWindowWidget.h"


void UPauseMenuWindowWidget::SystemWindowCancelInputFunction() {
}

void UPauseMenuWindowWidget::SystemWindowCancelFunction() {
}




void UPauseMenuWindowWidget::ReturnToTutorialMenuWindowOKFunction() {
}

void UPauseMenuWindowWidget::ReturnToTrialMenuOKFunction() {
}

void UPauseMenuWindowWidget::ReturnToOrderSelectWindowOKFunction() {
}

void UPauseMenuWindowWidget::ReturnToMemberSelectWindowOKFunction() {
}

void UPauseMenuWindowWidget::ReturnToMainMenuWindowOKFunction() {
}

void UPauseMenuWindowWidget::ReturnRoom() {
}

void UPauseMenuWindowWidget::LeaveRoom() {
}

void UPauseMenuWindowWidget::FinishReplayWindowOKFunction() {
}

void UPauseMenuWindowWidget::EndTrainingWindowOKFunction() {
}

void UPauseMenuWindowWidget::DeleteRecordingSlotWindowOKFunction() {
}

void UPauseMenuWindowWidget::CloseCommandList(int32 PlayerID, EUiOperation Operation) {
}

void UPauseMenuWindowWidget::CloseButtonConfig(int32 PlayerID, EUiOperation Operation) {
}

void UPauseMenuWindowWidget::CloseBattleSetting(int32 PlayerID, EUiOperation Operation) {
}

void UPauseMenuWindowWidget::BackToRoomWindowOKFunction() {
}

UPauseMenuWindowWidget::UPauseMenuWindowWidget() {
    this->Overlay_base_A = NULL;
    this->VerticalBox_1 = NULL;
    this->Overlay_base_B = NULL;
    this->VerticalBox_2 = NULL;
    this->Overlay_base_C = NULL;
    this->VerticalBox_3 = NULL;
    this->Overlay_page = NULL;
    this->WBP_99_wdwA_92_03 = NULL;
    this->PlayAnimFrameIndex = 0;
    this->PlayAnimMenuIndex = 0;
    this->CurrentPage = 0;
    this->PageMax = 0;
    this->WBP_ANIM_wdw_B_PauseMenu = NULL;
}

