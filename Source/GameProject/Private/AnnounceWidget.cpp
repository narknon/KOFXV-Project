#include "AnnounceWidget.h"

void UAnnounceWidget::SetOutlineWidgetFlag(bool NewIsOutlineWidget) {
}

bool UAnnounceWidget::IsOutlineWidget() {
    return false;
}

UAnnounceWidget::UAnnounceWidget() {
    this->WidgetSwitcher_announce = NULL;
    this->WBP_91_Round = NULL;
    this->WBP_91_ReadyGO = NULL;
    this->WBP_91_Challenger = NULL;
    this->WBP_91_KO = NULL;
    this->WBP_91_Perfect = NULL;
    this->WBP_91_Draw = NULL;
    this->WBP_91_Timeup = NULL;
    this->WBP_91_PlayerWins = NULL;
    this->WBP_91_Complete = NULL;
}

