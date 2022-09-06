#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESpecialCategory.h"
#include "CharaCategory.h"
#include "DataAssetCharaCategorySetting.generated.h"

UCLASS(Blueprintable)
class UDataAssetCharaCategorySetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialCategory, FCharaCategory> RoundStartCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialCategory, FCharaCategory> ClimaxSuperAttackSRM;
    
    UDataAssetCharaCategorySetting();
};

