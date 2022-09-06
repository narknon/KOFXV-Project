#include "SplineMobBase.h"
#include "SplineComponent_HC.h"

void ASplineMobBase::UpdateMobStateMapRange() {
}

void ASplineMobBase::ResetMovedDistance() {
}

ASplineMobBase::ASplineMobBase() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent_HC>(TEXT("SplineComponent"));
    this->bTowardSpline = true;
    this->bReverse = false;
}

