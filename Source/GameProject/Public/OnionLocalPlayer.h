#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "OnionLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class GAMEPROJECT_API UOnionLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UOnionLocalPlayer();
};

