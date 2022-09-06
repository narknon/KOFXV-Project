#pragma once
#include "CoreMinimal.h"
#include "GameProjectGameMode.h"
#include "FightingGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class GAMEPROJECT_API AFightingGameMode : public AGameProjectGameMode {
    GENERATED_BODY()
public:
    AFightingGameMode();
};

