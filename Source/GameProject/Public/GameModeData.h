#pragma once
#include "CoreMinimal.h"
#include "EGameMode.h"
#include "EGameOptionBattleTime.h"
#include "EGameOptionBattleWinRule.h"
#include "EEntryOperationSide.h"
#include "EGameOptionAILevel.h"
#include "GameModeData.generated.h"

USTRUCT(BlueprintType)
struct FGameModeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameMode GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeamBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEntryOperationSide EntryOperationSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionBattleWinRule SelectedBattleWinRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionBattleTime SelectedBattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionAILevel CpuLevel;
    
    GAMEPROJECT_API FGameModeData();
};

