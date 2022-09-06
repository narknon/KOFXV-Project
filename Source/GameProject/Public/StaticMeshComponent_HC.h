#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "StaticMeshComponent_HC.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPROJECT_API UStaticMeshComponent_HC : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UStaticMeshComponent_HC();
};

