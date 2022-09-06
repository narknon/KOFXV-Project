#pragma once
#include "CoreMinimal.h"
#include "EBattleResultType.h"
#include "OnlineProfileRankmatchRecord.h"
#include "OnlineProfileRecentlyRankmatchRecord.generated.h"

USTRUCT(BlueprintType)
struct FOnlineProfileRecentlyRankmatchRecord : public FOnlineProfileRankmatchRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBattleResultType> BattleResult;
    
    GAMEPROJECT_API FOnlineProfileRecentlyRankmatchRecord();
};

