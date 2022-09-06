#pragma once
#include "CoreMinimal.h"
#include "EMobEyeTrackType.h"
#include "MobActorBase.h"
#include "UObject/NoExportTypes.h"
#include "EEventMobState.h"
#include "EPlayerID.h"
#include "EventMobBase.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API AEventMobBase : public AMobActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WatchingLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WatchingLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMobEyeTrackType MobEyeTrackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventMobState EventState;
    
public:
    AEventMobBase();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateWatchingLocation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StageDemoStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StageDemoEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StageDemoChangeCut(int32 cutNum);
    
    UFUNCTION(BlueprintCallable)
    void SetMobEyeTrackType(EMobEyeTrackType Type);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWatchingPlayerLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMobEyeTrackType GetMobEyeTrackType() const;
    
};

