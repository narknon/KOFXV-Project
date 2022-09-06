#pragma once
#include "CoreMinimal.h"
#include "OnlineProfileBattleLogPlayer.h"
#include "ESensekiLogEntry.h"
#include "UObject/NoExportTypes.h"
#include "EBattleRoundWinner.h"
#include "OnlineProfileBattleLog.generated.h"

USTRUCT(BlueprintType)
struct FOnlineProfileBattleLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineProfileBattleLogPlayer P1Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineProfileBattleLogPlayer P2Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESensekiLogEntry Senseki;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CreateDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUploadedReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBattleRoundWinner> RoundWinners;
    
    GAMEPROJECT_API FOnlineProfileBattleLog();
};

