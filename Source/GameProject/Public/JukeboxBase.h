#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "JukeboxBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UJukeboxBase : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UJukeboxBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGuide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestUpdateWindow(const int32& InPreCursorIndex, const int32& InCursorIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCloseWindow();
    
};

