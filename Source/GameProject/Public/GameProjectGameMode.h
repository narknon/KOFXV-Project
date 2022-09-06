#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameProjectGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class GAMEPROJECT_API AGameProjectGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AGameProjectGameMode();
};

