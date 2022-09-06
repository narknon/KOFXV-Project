#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CelShaderLight.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable)
class GAMEPROJECT_API ACelShaderLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialCollection;
    
    ACelShaderLight();
};

