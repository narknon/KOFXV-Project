#pragma once
#include "CoreMinimal.h"
#include "EffekseerHandle.generated.h"

class UEffekseerEffect;
class UEffekseerSystemComponent;
class UEffekseerEffectMaterialParameterHolder;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct EFFEKSEER_API FEffekseerHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffekseerEffect* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEffekseerSystemComponent* System;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEffekseerEffectMaterialParameterHolder*, UMaterialInstanceDynamic*> DynamicMaterials;
    
    FEffekseerHandle();
};

