#pragma once
#include "CoreMinimal.h"
#include "AssetActionTool.h"
#include "AssetOcam.generated.h"

UCLASS(Blueprintable)
class ACTIONTOOL_API UAssetOcam : public UAssetActionTool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 OcamDataSize;
    
    UAssetOcam();
};

