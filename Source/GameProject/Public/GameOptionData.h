#pragma once
#include "CoreMinimal.h"
#include "EGameOptionAILevel.h"
#include "EGameOptionBattleTime.h"
#include "EGameOptionBattleWinRule.h"
#include "GameOptionData.generated.h"

USTRUCT(BlueprintType)
struct FGameOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionAILevel aiLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionBattleWinRule BattleWinRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOptionBattleTime BattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> optionSoundParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGameOptionPopUp;
    
    GAMEPROJECT_API FGameOptionData();
};

