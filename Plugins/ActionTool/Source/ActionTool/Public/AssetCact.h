#pragma once
#include "CoreMinimal.h"
#include "AssetActionTool.h"
#include "AssetCact.generated.h"

UCLASS(Blueprintable)
class ACTIONTOOL_API UAssetCact : public UAssetActionTool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 ReadBufferSize;
    
    UAssetCact();
};

