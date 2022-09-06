#pragma once
#include "CoreMinimal.h"
#include "PlayActionSoundOptionInfo.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct FPlayActionSoundOptionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkComponent* target_akcomponent;
    
    UPROPERTY(EditAnywhere)
    uint32 option_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_enable_2dpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_enable_demo_2dpan;
    
    GAMEPROJECT_API FPlayActionSoundOptionInfo();
};

