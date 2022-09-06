#pragma once
#include "CoreMinimal.h"
#include "BackgroundSkelMeshMaterialData.h"
#include "BackgroundStaticMeshMaterialData.h"
#include "BackgroundMeshData.generated.h"

USTRUCT(BlueprintType)
struct FBackgroundMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackgroundStaticMeshMaterialData> pStaticMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackgroundSkelMeshMaterialData> pSkelMeshMaterials;
    
    GAMEPROJECT_API FBackgroundMeshData();
};

