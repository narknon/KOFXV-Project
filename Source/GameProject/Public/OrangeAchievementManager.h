#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OrangeAchievementManager.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class GAMEPROJECT_API UOrangeAchievementManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AchievementsListener;
    
    UOrangeAchievementManager();
    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(APlayerController* InPlayerController, FName AchievementName);
    
    UFUNCTION(BlueprintCallable)
    void ResetAchievements(APlayerController* InPlayerController);
    
};

