#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlatformGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UPlatformGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPlatformGameInstanceSubsystem();
};

