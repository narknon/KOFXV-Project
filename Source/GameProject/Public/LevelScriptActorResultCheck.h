#pragma once
#include "CoreMinimal.h"
#include "InputBaseLevelScriptActor.h"
#include "LevelScriptActorResultCheck.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API ALevelScriptActorResultCheck : public AInputBaseLevelScriptActor {
    GENERATED_BODY()
public:
    ALevelScriptActorResultCheck();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCursor(int32 CursorNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateContentNum(int32 CursorNum, int32 ContentNum);
    
    UFUNCTION(BlueprintCallable)
    void SetResultVoiceNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetDecidedContent(int32 stage, int32 GameMode, int32 P1Chara, int32 P2Chara, int32 P1Win, bool IsTeam, bool IsSpecialWin, bool IsArrangeCostume);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentContentNum(int32 ContentNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideMenu();
    
};

