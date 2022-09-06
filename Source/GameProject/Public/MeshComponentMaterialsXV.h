#pragma once
#include "CoreMinimal.h"
#include "MaterialStructXV.h"
#include "MeshComponentMaterialsXV.generated.h"

USTRUCT(BlueprintType)
struct FMeshComponentMaterialsXV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialStructXV> Components;
    
    GAMEPROJECT_API FMeshComponentMaterialsXV();
};

