#pragma once
#include "CoreMinimal.h"
#include "SoundUnlock.generated.h"

USTRUCT(BlueprintType)
struct FSoundUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> newmark;
    
    GAMEPROJECT_API FSoundUnlock();
};

