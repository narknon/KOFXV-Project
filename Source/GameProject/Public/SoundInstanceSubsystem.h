#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SoundInstanceSubsystem.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class GAMEPROJECT_API USoundInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkComponent* soundlist_bgm_akcomponent_;
    
    USoundInstanceSubsystem();
};

