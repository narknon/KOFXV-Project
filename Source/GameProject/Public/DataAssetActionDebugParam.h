#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActionDebugCameraParam.h"
#include "DataAssetActionDebugParam.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UDataAssetActionDebugParam : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionDebugCameraParam maxSpMoveCameraParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iBattleLoopCount;
    
public:
    UDataAssetActionDebugParam();
};

