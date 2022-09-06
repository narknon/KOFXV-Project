#pragma once
#include "CoreMinimal.h"
#include "ChatWindowStatus.generated.h"

USTRUCT(BlueprintType)
struct FChatWindowStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChatScrollIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScrollBarUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScrollBarDown;
    
    GAMEPROJECT_API FChatWindowStatus();
};

