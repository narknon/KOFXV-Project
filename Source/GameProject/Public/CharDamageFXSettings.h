#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharDamageFXSettings.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FCharDamageFXSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectNormVecRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NormVecRotCentre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectCamVecRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CamVecRotCentre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* EffectTexture;
    
    GAMEPROJECT_API FCharDamageFXSettings();
};

