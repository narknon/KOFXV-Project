#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkSpatialAudioVolume.generated.h"

class UAkSurfaceReflectorSetComponent;
class UAkLateReverbComponent;
class UAkRoomComponent;

UCLASS(Blueprintable)
class AKAUDIO_API AAkSpatialAudioVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* LateReverb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkRoomComponent* Room;
    
    AAkSpatialAudioVolume();
};

