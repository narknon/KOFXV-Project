#pragma once
#include "CoreMinimal.h"
#include "ERoomCountDownStatus.h"
#include "RoomCount.generated.h"

USTRUCT(BlueprintType)
struct FRoomCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoomCountDownStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    GAMEPROJECT_API FRoomCount();
};

