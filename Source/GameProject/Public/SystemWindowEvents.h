#pragma once
#include "CoreMinimal.h"
#include "ESystemWindowPriority.h"
#include "ESystemWindowID.h"
#include "EPlayerID.h"
#include "SystemWindowEvents.generated.h"

USTRUCT(BlueprintType)
struct FSystemWindowEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESystemWindowID SystemWindowID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESystemWindowPriority SystemWindowPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID OpenPlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    GAMEPROJECT_API FSystemWindowEvents();
};

