#include "TelopWidget.h"

void UTelopWidget::StartTelopTimer() {
}

void UTelopWidget::SetTelopVisibility(ESlateVisibility InVisibility) {
}

void UTelopWidget::SetTelopType(EMovieTelopType Type) {
}

void UTelopWidget::SetTelopData(const TArray<FMovieJimakuData>& InJimakuData) {
}

void UTelopWidget::EndTelopTimer() {
}

UTelopWidget::UTelopWidget() {
    this->TelopText = NULL;
    this->TelopText_1 = NULL;
    this->TelopText_2 = NULL;
    this->TelopText_3 = NULL;
    this->MyMedia = NULL;
    this->NormalTelopWidget = NULL;
    this->UseTelopWidget = NULL;
}

