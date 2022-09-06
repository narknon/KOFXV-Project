#pragma once
#include "CoreMinimal.h"
#include "EEffekseerAlphaBlendType.h"
#include "EffekseerMaterialElement.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct EFFEKSEER_API FEffekseerMaterialElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEffekseerAlphaBlendType AlphaBlend;
    
    FEffekseerMaterialElement();
};

