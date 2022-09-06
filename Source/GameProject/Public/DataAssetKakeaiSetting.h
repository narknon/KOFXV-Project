#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECharacterID.h"
#include "KakeaiData.h"
#include "DataAssetKakeaiSetting.generated.h"

UCLASS(Blueprintable)
class UDataAssetKakeaiSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FKakeaiData> KakeaiMap;
    
    UDataAssetKakeaiSetting();
};

