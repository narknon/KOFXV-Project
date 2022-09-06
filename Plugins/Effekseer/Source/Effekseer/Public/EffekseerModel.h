#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EffekseerModel.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class EFFEKSEER_API UEffekseerModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AnimationFaceOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AnimationFaceCounts;
    
    UEffekseerModel();
};

