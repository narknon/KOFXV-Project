#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EffekseerMaterialElement.h"
#include "EffekseerUniformProperty.h"
#include "EffekseerTextureProperty.h"
#include "EffekseerMaterial.generated.h"

class UMaterial;

UCLASS(Blueprintable)
class EFFEKSEER_API UEffekseerMaterial : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffekseerMaterialElement> MaterialElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffekseerUniformProperty> Uniforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> UniformNameToIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffekseerTextureProperty> Textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> TextureNameToIndex;
    
    UEffekseerMaterial();
};

