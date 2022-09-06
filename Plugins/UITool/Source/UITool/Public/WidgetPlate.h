#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WidgetPlate.generated.h"

class UWidgetPlateComponent;

UCLASS(Blueprintable)
class UITOOL_API AWidgetPlate : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetPlateComponent* WidgetPlate;
    
public:
    AWidgetPlate();
};

