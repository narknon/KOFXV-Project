#pragma once
#include "CoreMinimal.h"
#include "GameInstanceGameParameters.h"
#include "OnlineGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GAMEPROJECT_API UOnlineGameInstance : public UGameInstanceGameParameters {
    GENERATED_BODY()
public:
    UOnlineGameInstance();
};

