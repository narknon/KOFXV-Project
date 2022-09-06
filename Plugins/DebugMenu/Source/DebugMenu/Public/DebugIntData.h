#pragma once
#include "CoreMinimal.h"
#include "DebugIntData.generated.h"

USTRUCT(BlueprintType)
struct FDebugIntData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    DEBUGMENU_API FDebugIntData();
};

