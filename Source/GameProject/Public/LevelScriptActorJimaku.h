#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "EJimakuBackground.h"
#include "LevelScriptActorJimaku.generated.h"

UCLASS(Blueprintable)
class ALevelScriptActorJimaku : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ALevelScriptActorJimaku();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetJimakuVisiblity(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetJimakuText(const FText& text1, const FText& text2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetJimakuBackground(EJimakuBackground bgType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearJimakuText();
    
};

