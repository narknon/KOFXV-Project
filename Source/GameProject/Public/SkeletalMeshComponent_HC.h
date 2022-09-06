#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "SkeletalMeshComponent_HC.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPROJECT_API USkeletalMeshComponent_HC : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    USkeletalMeshComponent_HC();
};

