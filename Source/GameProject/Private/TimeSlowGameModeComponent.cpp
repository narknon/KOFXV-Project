#include "TimeSlowGameModeComponent.h"

class UCurveFloat;

void UTimeSlowGameModeComponent::StepQueue(float DeltaTime) {
}

void UTimeSlowGameModeComponent::StartTimeSlowQueue(UCurveFloat* Curve, bool WithFTGSystem) {
}

void UTimeSlowGameModeComponent::StartTimeDilation(float TimeDilation, bool WithFTGSystem) {
}

void UTimeSlowGameModeComponent::SetTimeDilation(float TimeDilation) {
}

void UTimeSlowGameModeComponent::ResetTimeDilation() {
}

UTimeSlowGameModeComponent::UTimeSlowGameModeComponent() {
    this->bWithFTGSystem = false;
    this->TimeCurve = NULL;
    this->CurrentTime = 0.00f;
    this->CurrentCurveTIme = 0.00f;
    this->EndTime = 0.00f;
    this->PreviewCurve = NULL;
    this->fTimeDilation = 1.00f;
}

