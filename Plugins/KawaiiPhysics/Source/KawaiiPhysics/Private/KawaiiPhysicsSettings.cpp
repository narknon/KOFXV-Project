#include "KawaiiPhysicsSettings.h"

FKawaiiPhysicsSettings::FKawaiiPhysicsSettings() {
    this->Damping = 0.00f;
    this->WorldDampingLocation = 0.00f;
    this->WorldDampingRotation = 0.00f;
    this->Stiffness = 0.00f;
    this->Radius = 0.00f;
    this->LimitAngle = 0.00f;
    this->AngularLimits1 = 0.00f;
    this->AngularLimits2 = 0.00f;
    this->AngularLimitsOffset1 = 0.00f;
    this->AngularLimitsOffset2 = 0.00f;
    this->CollisionType = EBoneCollisionType::Sphere;
}

