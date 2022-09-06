#pragma once
#include "CoreMinimal.h"
#include "AssetActionTool.h"
#include "AssetDat.generated.h"

UCLASS(Blueprintable)
class ACTIONTOOL_API UAssetDat : public UAssetActionTool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TArray<uint8> KeyData;
    
    UAssetDat();
};

