#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MatchInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UMatchInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMatchInstanceSubsystem();
    UFUNCTION(BlueprintCallable)
    void OnSelectedBattleMember();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchingAccepted(bool bEveryonAccepted);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameMatch();
    
};

