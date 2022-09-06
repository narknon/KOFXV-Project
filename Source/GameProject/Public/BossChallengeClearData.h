#pragma once
#include "CoreMinimal.h"
#include "BossChallengeClearData.generated.h"

USTRUCT(BlueprintType)
struct FBossChallengeClearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossChallengeBestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsClearChara;
    
    GAMEPROJECT_API FBossChallengeClearData();
};

