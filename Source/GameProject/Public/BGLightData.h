#pragma once
#include "CoreMinimal.h"
#include "BGLightData.generated.h"

class ULightComponent;

USTRUCT(BlueprintType)
struct FBGLightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULightComponent* pLightComp;
    
    GAMEPROJECT_API FBGLightData();
};

