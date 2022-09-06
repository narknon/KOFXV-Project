#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SceneComponent_HC.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USceneComponent_HC : public USceneComponent {
    GENERATED_BODY()
public:
    USceneComponent_HC();
};

