#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialChangeParam.h"
#include "ExtraModeDamageMagnification.h"
#include "DataAssetActionExpansion.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UDataAssetActionExpansion : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialChangeParam> materialChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtraModeDamageMagnification damageMag;
    
public:
    UDataAssetActionExpansion();
};

