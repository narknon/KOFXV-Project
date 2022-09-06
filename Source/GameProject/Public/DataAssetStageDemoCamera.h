#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StageDemoCutData.h"
#include "DataAssetStageDemoCamera.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UDataAssetStageDemoCamera : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStageDemoCutData> cameraCutData;
    
public:
    UDataAssetStageDemoCamera();
};

