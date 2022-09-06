#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyData.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> KeyData;
    
    GAMEPROJECT_API FReplayKeyData();
};

