#pragma once
#include "CoreMinimal.h"
#include "ReplayGameData.h"
#include "ReplayDBData.generated.h"

USTRUCT(BlueprintType)
struct FReplayDBData : public FReplayGameData {
    GENERATED_BODY()
public:
    GAMEPROJECT_API FReplayDBData();
};

