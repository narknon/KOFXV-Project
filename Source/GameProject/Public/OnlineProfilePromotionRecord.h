#pragma once
#include "CoreMinimal.h"
#include "EBattleResultType.h"
#include "OnlineProfileRankmatchRecord.h"
#include "OnlineProfilePromotionRecord.generated.h"

USTRUCT(BlueprintType)
struct FOnlineProfilePromotionRecord : public FOnlineProfileRankmatchRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBattleResultType> PromotionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPromotion;
    
    GAMEPROJECT_API FOnlineProfilePromotionRecord();
};

