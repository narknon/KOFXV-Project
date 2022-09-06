#pragma once
#include "CoreMinimal.h"
#include "StageDemoCameraParam.h"
#include "StageDemoCameraDOFParam.h"
#include "StageDemoCutData.generated.h"

USTRUCT(BlueprintType)
struct FStageDemoCutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iCutFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iFadeInFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iFadeOutFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageDemoCameraParam startCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageDemoCameraParam endCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageDemoCameraDOFParam dofSettings;
    
    GAMEPROJECT_API FStageDemoCutData();
};

