#pragma once
#include "CoreMinimal.h"
#include "OnlineProfileRankmatchRecord.generated.h"

USTRUCT(BlueprintType)
struct FOnlineProfileRankmatchRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawCount;
    
    GAMEPROJECT_API FOnlineProfileRankmatchRecord();
};

