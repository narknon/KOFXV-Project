#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECharacterID.h"
#include "DataAssetCharaCostume_Data.h"
#include "DataAssetCharaCostume.generated.h"

UCLASS(Blueprintable)
class UDataAssetCharaCostume : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FDataAssetCharaCostume_Data> CharacterList;
    
    UDataAssetCharaCostume();
};

