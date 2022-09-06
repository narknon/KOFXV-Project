#include "GuideItemArrayWidget.h"

void UGuideItemArrayWidget::SetOverrideFontColor(bool UseOverrideFontColor, const FSlateColor& InFontCollor) {
}

void UGuideItemArrayWidget::SetOverrideFont(bool UseOverrideFont, const FSlateFontInfo& InFontInfo) {
}

void UGuideItemArrayWidget::SetOverrideButtonSize(bool UseOverrideSize, const FVector2D& InSize) {
}

void UGuideItemArrayWidget::SetGuide(FName DataTableRowName) {
}

UGuideItemArrayWidget::UGuideItemArrayWidget() {
    this->GuideBox = NULL;
    this->GuideTable = NULL;
    this->bUseOverrideFont = false;
    this->bUseOverrideButtonSize = false;
    this->bUseOverrideFontColor = false;
}

