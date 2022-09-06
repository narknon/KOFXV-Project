#pragma once
#include "CoreMinimal.h"
#include "BackgroundSkelMeshMaterialData.generated.h"

class USkeletalMeshComponent;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FBackgroundSkelMeshMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* pSkeletonMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> pBaseMaterials;
    
    GAMEPROJECT_API FBackgroundSkelMeshMaterialData();
};

