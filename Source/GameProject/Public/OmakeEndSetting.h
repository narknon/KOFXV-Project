#pragma once
#include "CoreMinimal.h"
#include "OmakeEndSetting.generated.h"

USTRUCT(BlueprintType)
struct FOmakeEndSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OmakeSEKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SEFadeSeconds;
    
    GAMEPROJECT_API FOmakeEndSetting();
};

