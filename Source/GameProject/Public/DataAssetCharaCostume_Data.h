#pragma once
#include "CoreMinimal.h"
#include "ECostumeType.h"
#include "DataAssetCharaCostume_Data.generated.h"

USTRUCT(BlueprintType)
struct FDataAssetCharaCostume_Data {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECostumeType, FString> CostumeFolders;
    
    GAMEPROJECT_API FDataAssetCharaCostume_Data();
};

