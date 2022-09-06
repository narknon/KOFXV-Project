#pragma once
#include "CoreMinimal.h"
#include "OnlineWaitSettingInfo.generated.h"

USTRUCT(BlueprintType)
struct FOnlineWaitSettingInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rankMatchWaitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 casualMatchWaitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 matchingRankIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 matchingLineSpdIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 matchingAreaIndex;
    
public:
    GAMEPROJECT_API FOnlineWaitSettingInfo();
};

