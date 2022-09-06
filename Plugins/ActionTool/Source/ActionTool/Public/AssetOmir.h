#pragma once
#include "CoreMinimal.h"
#include "AssetActionTool.h"
#include "AssetOmir.generated.h"

UCLASS(Blueprintable)
class ACTIONTOOL_API UAssetOmir : public UAssetActionTool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 OmirDataSize;
    
    UAssetOmir();
};

