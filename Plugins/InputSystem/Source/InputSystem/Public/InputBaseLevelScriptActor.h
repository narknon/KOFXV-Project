#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "EUiOperation.h"
#include "InputBaseLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class INPUTSYSTEM_API AInputBaseLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    AInputBaseLevelScriptActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyRepeating(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyReleased(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyPressing(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyPressed(int32 PlayerID, EUiOperation Operation);
    
};

