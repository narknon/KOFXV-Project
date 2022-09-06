#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "BattleHudBase.h"
#include "ECharacterID.h"
#include "EGameOptionBattleWinRule.h"
#include "EGameOptionBattleTime.h"
#include "BattleHudValueGetter.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UBattleHudValueGetter : public UBattleHudBase {
    GENERATED_BODY()
public:
    UBattleHudValueGetter();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void LikelyStun(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsSuperCancel(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsStun(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsReversalMove(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsQuickClimaxMode(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPunish(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsGuardCrash(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsGuardCancel(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsDuringCombo(bool& p1inCombo, bool& p2inCombo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsCounterDamaged(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsClimaxMode(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsClimaxCancel(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsClimaxActionCombo(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsAdvancedCancel(bool& P1, bool& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerID GetWinnerPlayerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWinCount(int32& P1, int32& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeamMemberIDArray(TArray<ECharacterID>& p1Team, TArray<ECharacterID>& p2Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStunPower(float& P1, float& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPowerGauge(float& p1Bar, float& p2Bar, int32& p1Num, int32& p2Num, bool& p1IsMax, bool& p2IsMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOrder(int32& P1, int32& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerID GetLoserPlayerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLoseCount(int32& P1, int32& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGuard(float& P1, float& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGaugeHP(float& P1, float& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBattleTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCombo(int32& P1, int32& P2, bool& p1vis, bool& p2vis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetClimaxGauge(float& P1, float& P2, int32& p1Max, int32& p2Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterID(ECharacterID& P1, ECharacterID& P2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameOptionBattleTime GetBattleTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleScore(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameOptionBattleWinRule GetBattleRule();
    
};

