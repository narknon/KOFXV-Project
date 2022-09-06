#pragma once
#include "CoreMinimal.h"
#include "FirstNotice.generated.h"

USTRUCT(BlueprintType)
struct FFirstNotice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> DLCChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> DLCChara2;
    
    GAMEPROJECT_API FFirstNotice();
};

