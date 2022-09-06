#include "MovieWidget.h"

void UMovieWidget::SetMovieData(const FMovieDataTable& InData) {
}

void UMovieWidget::PlayBGMAndSE() {
}


void UMovieWidget::MovieStartEvent() {
}

void UMovieWidget::MovieStartAfterAnimation(const FName& Animation) {
}


void UMovieWidget::MovieSeeked() {
}


void UMovieWidget::MovieEndCleanUp() {
}

void UMovieWidget::ClearAnimation() {
}

UMovieWidget::UMovieWidget() {
    this->WBP_Telop = NULL;
    this->WBP_94_telop = NULL;
    this->bAutoMovieStart = false;
    this->bUseEndCreditImage = false;
    this->PlayMovieID = EMovieID::NONE;
    this->Duration = 0.00f;
}

