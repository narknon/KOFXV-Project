#pragma once
#include "CoreMinimal.h"
#include "IndentArrow.generated.h"

USTRUCT(BlueprintType)
struct FIndentArrow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 arrow0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 arrow1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 arrow2;
    
    GAMEPROJECT_API FIndentArrow();
};

