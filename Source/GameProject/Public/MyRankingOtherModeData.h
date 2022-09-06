#pragma once
#include "CoreMinimal.h"
#include "MyRankingStoryClearData.h"
#include "MyRankingOtherModeData.generated.h"

USTRUCT(BlueprintType)
struct FMyRankingOtherModeData : public FMyRankingStoryClearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinCount;
    
    GAMEPROJECT_API FMyRankingOtherModeData();
};

