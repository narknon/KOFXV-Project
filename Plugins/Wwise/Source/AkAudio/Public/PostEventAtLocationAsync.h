#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PostEventAtLocationAsyncOutputPinDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PostEventAtLocationAsync.generated.h"

class UObject;
class UPostEventAtLocationAsync;
class UAkAudioEvent;

UCLASS(Blueprintable)
class AKAUDIO_API UPostEventAtLocationAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostEventAtLocationAsyncOutputPin Completed;
    
    UPostEventAtLocationAsync();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UPostEventAtLocationAsync* PostEventAtLocationAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);
    
private:
    UFUNCTION(BlueprintCallable)
    void PollPostEventFuture();
    
};

