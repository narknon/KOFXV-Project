#pragma once
#include "CoreMinimal.h"
#include "PlayActionSoundOptionInfo.h"
#include "PlayActionSoundOptionInfos.generated.h"

USTRUCT(BlueprintType)
struct FPlayActionSoundOptionInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayActionSoundOptionInfo> Info;
    
    GAMEPROJECT_API FPlayActionSoundOptionInfos();
};

