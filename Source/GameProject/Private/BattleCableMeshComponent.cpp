#include "BattleCableMeshComponent.h"

class AActor;
class USceneComponent;

void UBattleCableMeshComponent::SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName) {
}

USceneComponent* UBattleCableMeshComponent::GetAttachedComponent() const {
    return NULL;
}

AActor* UBattleCableMeshComponent::GetAttachedActor() const {
    return NULL;
}

UBattleCableMeshComponent::UBattleCableMeshComponent() {
    this->bEarthquakeChain = true;
    this->bAttachStart = true;
    this->bAttachEnd = true;
    this->SubstepTime = 0.02f;
    this->SolverIterations = 1;
    this->bEnableStiffness = false;
    this->bEnableCollision = false;
    this->CollisionFriction = 0.20f;
    this->CableGravityScale = 1.00f;
    this->CableWidth = 10.00f;
    this->TwistAxis = ECableMeshAxis::NONE;
    this->bEnableVerletSimulation = true;
    this->bLocalSpaceCollision = true;
}

