#pragma once
#include "CoreMinimal.h"
#include "Ranking.h"
#include "StoryRanking.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API UStoryRanking : public URanking {
    GENERATED_BODY()
public:
    UStoryRanking();
};

