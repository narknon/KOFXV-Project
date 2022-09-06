#pragma once
#include "CoreMinimal.h"
#include "EGameOptionBattleWinRule.h"
#include "BattleResult.h"
#include "BattleState.generated.h"

USTRUCT(BlueprintType)
struct FBattleState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionBattleWinRule m_winRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_teamMemberCountP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_teamMemberCountP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_roundCountTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleResult> m_battleResults;
    
    GAMEPROJECT_API FBattleState();
};

