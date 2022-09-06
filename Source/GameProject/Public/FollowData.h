#pragma once
#include "CoreMinimal.h"
#include "Follow.h"
#include "FollowData.generated.h"

USTRUCT(BlueprintType)
struct FFollowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollow Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNowFollow;
    
    GAMEPROJECT_API FFollowData();
};

