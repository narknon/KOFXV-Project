#pragma once
#include "CoreMinimal.h"
#include "OverrideUVOffsetParam.generated.h"

USTRUCT(BlueprintType)
struct FOverrideUVOffsetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    EFFEKSEER_API FOverrideUVOffsetParam();
};

