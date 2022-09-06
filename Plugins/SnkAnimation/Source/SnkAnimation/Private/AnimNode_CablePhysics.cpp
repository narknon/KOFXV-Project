#include "AnimNode_CablePhysics.h"

FAnimNode_CablePhysics::FAnimNode_CablePhysics() {
    this->ResetReferenceBlendRate = 0.00f;
    this->TargetFramerate = 0;
    this->OverrideTargetFramerate = false;
    this->WorldDampingLocationCurve = NULL;
    this->DampingCurve = NULL;
    this->StiffnessCurve = NULL;
    this->RadiusCurve = NULL;
    this->bUpdatePhysicsSettingsInGame = false;
    this->DummyBoneLength = 0.00f;
    this->BoneForwardAxis = EBoneForwardAxis::X_Positive;
    this->ResetAfterTeleport = false;
    this->TeleportRootBoneDistanceThreshold = 0.00f;
    this->TeleportDistanceThreshold = 0.00f;
    this->TeleportRotationThreshold = 0.00f;
    this->SolverIterations = 0;
    this->bEnableStiffness = false;
    this->bEnableCollision = false;
    this->CollisionFriction = 0.00f;
    this->TotalBoneLength = 0.00f;
    this->bInitPhysicsSettings = false;
}

