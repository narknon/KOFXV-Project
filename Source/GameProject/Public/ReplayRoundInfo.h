#pragma once
#include "CoreMinimal.h"
#include "ReplayRoundEndPlayerInfo.h"
#include "EPlayerID.h"
#include "ReplayRoundStartPlayerInfo.h"
#include "ReplayKeyData.h"
#include "EBattleRoundFinishType.h"
#include "EBattleRoundWinner.h"
#include "ReplayRoundInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayRoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerID, FReplayRoundStartPlayerInfo> RoundStartPlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerID, FReplayRoundEndPlayerInfo> RoundEndPlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerID, FReplayKeyData> KeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleRoundWinner winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleRoundFinishType finishType;
    
    UPROPERTY(EditAnywhere)
    uint32 RandomSeed;
    
    GAMEPROJECT_API FReplayRoundInfo();
};

