#pragma once
#include "CoreMinimal.h"
#include "EBattleRoundFinishType.h"
#include "EBattleRoundWinner.h"
#include "ECharacterID.h"
#include "BattleResult.generated.h"

USTRUCT(BlueprintType)
struct FBattleResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleRoundWinner winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID useCharacterP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID useCharacterP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleRoundFinishType finishType;
    
    GAMEPROJECT_API FBattleResult();
};

