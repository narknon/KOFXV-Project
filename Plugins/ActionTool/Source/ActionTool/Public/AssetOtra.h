#pragma once
#include "CoreMinimal.h"
#include "AssetActionTool.h"
#include "AssetOtra.generated.h"

UCLASS(Blueprintable)
class ACTIONTOOL_API UAssetOtra : public UAssetActionTool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 OtraDataSize;
    
    UAssetOtra();
};

