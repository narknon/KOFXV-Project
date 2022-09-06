#pragma once
#include "CoreMinimal.h"
#include "Ranking.h"
#include "RankmatchRanking.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API URankmatchRanking : public URanking {
    GENERATED_BODY()
public:
    URankmatchRanking();
};

