#pragma once
#include "CoreMinimal.h"
#include "EGameOptionBattleTime.h"
#include "EGameOptionBattleWinRule.h"
#include "EGameOptionAILevel.h"
#include "OptionGameInfo.generated.h"

USTRUCT(BlueprintType)
struct FOptionGameInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionBattleWinRule winRuleStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionBattleWinRule winRuleGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionBattleWinRule winRuleVersus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionBattleTime BattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionBattleTime battleTimeStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionAILevel aiLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionAILevel aiLevelStory;
    
public:
    GAMEPROJECT_API FOptionGameInfo();
};

