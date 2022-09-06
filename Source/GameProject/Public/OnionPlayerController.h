#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OnionPlayerController.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class GAMEPROJECT_API AOnionPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedProfileCountry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* Avatar;
    
    AOnionPlayerController();
    UFUNCTION(BlueprintCallable)
    bool IsDisconnectStatusTripped();
    
};

