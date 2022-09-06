#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "GimmickActorBase.h"
#include "GimmickEventActor.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API AGimmickEventActor : public AGimmickActorBase {
    GENERATED_BODY()
public:
    AGimmickEventActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StageDemoStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StageDemoEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StageDemoChangeCut(int32 cutNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSuperMoveAction(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRoundStart(int32 Round);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRoundEnd(int32 Round);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerOperationStart(int32 Round);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMaxSuperMoveAction(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClimaxSuperMoveAction(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBattleWinningAction(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBattleResultAnnounce(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBattleDamage(EPlayerID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClimaxActionCombo(EPlayerID PlayerID) const;
    
};

