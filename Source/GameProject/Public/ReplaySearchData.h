#pragma once
#include "CoreMinimal.h"
#include "EQueryReplayOrder.h"
#include "EReplayFilteringChara.h"
#include "EReplayFilteringBattleRules.h"
#include "EReplayFilteringBattleMode.h"
#include "ECharacterID.h"
#include "ReplaySearchData.generated.h"

USTRUCT(BlueprintType)
struct FReplaySearchData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EQueryReplayOrder Sort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayFilteringBattleMode BattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayFilteringBattleRules BattleRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EReplayFilteringChara> CharaSettingAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterID> CharaIDAry;
    
    GAMEPROJECT_API FReplaySearchData();
};

