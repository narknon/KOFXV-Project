#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "EBossChallenge.h"
#include "BossChallengeLeaderboardData.generated.h"

USTRUCT(BlueprintType)
struct FBossChallengeLeaderboardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterID> MyTeamMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iClearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBossChallenge ChallengeID;
    
    GAMEPROJECT_API FBossChallengeLeaderboardData();
};

