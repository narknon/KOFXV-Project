#pragma once
#include "CoreMinimal.h"
#include "DebugRectInfo.h"
#include "DebugStringInfo.generated.h"

USTRUCT(BlueprintType)
struct FDebugStringInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugRectInfo Rect;
    
    GAMEPROJECT_API FDebugStringInfo();
};

