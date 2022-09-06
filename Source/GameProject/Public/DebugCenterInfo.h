#pragma once
#include "CoreMinimal.h"
#include "ECenterType.h"
#include "DebugRectInfo.h"
#include "DebugCenterInfo.generated.h"

USTRUCT(BlueprintType)
struct FDebugCenterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECenterType CenterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugRectInfo Rect;
    
    GAMEPROJECT_API FDebugCenterInfo();
};

