#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "SplineComponent_HC.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPROJECT_API USplineComponent_HC : public USplineComponent {
    GENERATED_BODY()
public:
    USplineComponent_HC();
};

