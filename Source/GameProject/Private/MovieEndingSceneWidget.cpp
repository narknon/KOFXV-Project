#include "MovieEndingSceneWidget.h"

UMovieEndingSceneWidget::UMovieEndingSceneWidget() {
    this->WBP_Movie = NULL;
    this->fCreditBGMStartSeconds = 0.00f;
    this->CreditBGMStartSecondFromLast = 0.00f;
    this->fBlackSeconds = 0.00f;
    this->bSkipSeek = false;
}

