#include "GuideLayoutWidget.h"

void UGuideLayoutWidget::SetGuide(EGuidePosition GuidePosition, FName DataTableRowName) {
}

void UGuideLayoutWidget::SelectUseGuide(EGuidePosition GuidePosition, EGuidePosition GuidePositionSub) {
}

UGuideLayoutWidget::UGuideLayoutWidget() {
    this->LeftGuide = NULL;
    this->CenterGuide = NULL;
    this->RightGuide = NULL;
}

