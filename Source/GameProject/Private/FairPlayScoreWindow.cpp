#include "FairPlayScoreWindow.h"

FFairPlayScoreWindow::FFairPlayScoreWindow() {
    this->bWasDecreasedScore = false;
    this->bWasIncurredPenalty = false;
    this->bWasRecoverdScore = false;
    this->bWasLiftedPenaltyAsTimeAdvances = false;
    this->bWasLiftedPenaltyAsBattleCompletion = false;
}

