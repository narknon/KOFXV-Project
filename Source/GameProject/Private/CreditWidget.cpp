#include "CreditWidget.h"

void UCreditWidget::OnOmakeEndStarted() {
}

void UCreditWidget::OmakeEndSEStart() {
}

void UCreditWidget::OmakeEndPlay() {
}

void UCreditWidget::FadeAfterStop() {
}

void UCreditWidget::EndScene() {
}

void UCreditWidget::CreditSkip() {
}

void UCreditWidget::CreditPlayStop() {
}

void UCreditWidget::CreditPlayStart() {
}

void UCreditWidget::BGMStart() {
}

void UCreditWidget::AddNextCredit() {
}

UCreditWidget::UCreditWidget() {
    this->MainCanvas = NULL;
    this->WBP_Movie = NULL;
    this->MidashiClass = NULL;
    this->NameClass = NULL;
    this->ImageWidgetClass = NULL;
    this->ReferenceData = NULL;
    this->CreditFrameOutSeconds = 0.00f;
    this->CreditFrameInSeconds = 0.00f;
    this->TitleLogoFadeInSeconds = 0.00f;
    this->SNKLogoFadeInSeconds = 0.00f;
    this->CreditEndSeconds = 0.00f;
    this->SideImageFadeInSeconds = 0.00f;
    this->OmakeSEFadeSecondsFromMovieEnd = 0.00f;
    this->MovieDataTable = NULL;
    this->SideImageCount = 0;
    this->TheBottomWidget = NULL;
}

