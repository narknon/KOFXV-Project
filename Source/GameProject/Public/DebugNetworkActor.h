#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnlineBattleData.h"
#include "RoomInfo.h"
#include "ECheckOnlineResult.h"
#include "DebugNetworkActor.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API ADebugNetworkActor : public AActor {
    GENERATED_BODY()
public:
    ADebugNetworkActor();
private:
    UFUNCTION(BlueprintCallable)
    void OnSelectedBattleMember();
    
    UFUNCTION(BlueprintCallable)
    void OnFindRoomCompleted(bool bWasSuccessful, const TArray<FRoomInfo>& Results);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteCheckNetworkAvailability(ECheckOnlineResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleStart(const FOnlineBattleData& OnlineBattleData);
    
};

