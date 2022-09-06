#pragma once
#include "CoreMinimal.h"
#include "AssetActionTool.h"
#include "AssetOsec.generated.h"

UCLASS(Blueprintable)
class ACTIONTOOL_API UAssetOsec : public UAssetActionTool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 OsecDataSize;
    
    UAssetOsec();
};

