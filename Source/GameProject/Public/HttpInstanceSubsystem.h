#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HttpInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UHttpInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UHttpInstanceSubsystem();
};

