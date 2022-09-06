#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrimaryActor.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API APrimaryActor : public AActor {
    GENERATED_BODY()
public:
    APrimaryActor();
};

