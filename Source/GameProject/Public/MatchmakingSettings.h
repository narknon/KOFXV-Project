#pragma once
#include "CoreMinimal.h"
#include "EOnlineGameMode.h"
#include "EAntennaSelect.h"
#include "ERankSelect.h"
#include "EAreaSelect.h"
#include "MatchmakingSettings.generated.h"

USTRUCT(BlueprintType)
struct GAMEPROJECT_API FMatchmakingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineGameMode OnlineGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAntennaSelect AntennaSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERankSelect RankSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAreaSelect AreaSelect;
    
    FMatchmakingSettings();
};

