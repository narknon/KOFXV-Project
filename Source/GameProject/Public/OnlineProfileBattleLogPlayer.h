#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "OnlineProfileBattleLogPlayer.generated.h"

USTRUCT(BlueprintType)
struct FOnlineProfileBattleLogPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountID;
    
    UPROPERTY(EditAnywhere)
    int64 RankmatchPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterID> TeamCharacters;
    
    GAMEPROJECT_API FOnlineProfileBattleLogPlayer();
};

