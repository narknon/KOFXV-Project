#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugGraphicActor.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class GAMEPROJECT_API ADebugGraphicActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* SafeAreaWidget;
    
public:
    ADebugGraphicActor();
};

