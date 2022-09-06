#pragma once
#include "CoreMinimal.h"
#include "StageDemoCameraDOFParam.generated.h"

USTRUCT(BlueprintType)
struct FStageDemoCameraDOFParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float currentAperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float manualFocusDistance;
    
    GAMEPROJECT_API FStageDemoCameraDOFParam();
};

