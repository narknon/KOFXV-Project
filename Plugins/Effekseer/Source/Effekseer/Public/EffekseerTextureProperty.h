#pragma once
#include "CoreMinimal.h"
#include "EffekseerTextureProperty.generated.h"

USTRUCT(BlueprintType)
struct FEffekseerTextureProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    EFFEKSEER_API FEffekseerTextureProperty();
};

