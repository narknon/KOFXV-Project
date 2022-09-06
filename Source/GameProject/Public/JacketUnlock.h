#pragma once
#include "CoreMinimal.h"
#include "JacketUnlock.generated.h"

USTRUCT(BlueprintType)
struct FJacketUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> newmarkBGM;
    
    GAMEPROJECT_API FJacketUnlock();
};

