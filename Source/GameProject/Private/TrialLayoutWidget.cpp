#include "TrialLayoutWidget.h"

void UTrialLayoutWidget::SetPendingKill() {
}

bool UTrialLayoutWidget::IsPendingkill() const {
    return false;
}

UTrialLayoutWidget::UTrialLayoutWidget() {
    this->WBP_Fade = NULL;
    this->WBP_95_01_selector = NULL;
    this->WBP_92_01_costume_customize = NULL;
    this->WBP_07_Trial = NULL;
    this->bPendingKill = false;
}

