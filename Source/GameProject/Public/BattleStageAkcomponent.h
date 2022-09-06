#pragma once
#include "CoreMinimal.h"
#include "BattleStageAkcomponent.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct FBattleStageAkcomponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> AkComponent;
    
    GAMEPROJECT_API FBattleStageAkcomponent();
};

