#include "OptionWidget.h"

class UUserWidget;

void UOptionWidget::PlayerListWindowUnselOn() {
}

void UOptionWidget::PlayerListWindowUnselOff() {
}

UUserWidget* UOptionWidget::GetMenuSlot() {
    return NULL;
}

void UOptionWidget::ExitGame() {
}

void UOptionWidget::CloseSystemWindow(int32 PlayerID, EUiOperation Operation, bool isSave) {
}

void UOptionWidget::CancelPlayerListWindow(int32 PlayerID, EUiOperation Operation) {
}

UOptionWidget::UOptionWidget() {
    this->WBP_10_Menu_Slot = NULL;
}

