#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "OnionCheatManager.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class GAMEPROJECT_API UOnionCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComp;
    
    UOnionCheatManager();
};

