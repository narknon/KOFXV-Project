#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EUiOperation.h"
#include "InputBaseActor.generated.h"

UCLASS(Blueprintable)
class INPUTSYSTEM_API AInputBaseActor : public AActor {
    GENERATED_BODY()
public:
    AInputBaseActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyRepeating(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyReleased(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyPressing(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyPressed(int32 PlayerID, EUiOperation Operation);
    
};

