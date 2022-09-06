#pragma once
#include "CoreMinimal.h"
#include "BackgroundStaticMeshMaterialData.generated.h"

class UStaticMeshComponent;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FBackgroundStaticMeshMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* pStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> pBaseMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> pIkariMaterials;
    
    GAMEPROJECT_API FBackgroundStaticMeshMaterialData();
};

