#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OrangeAchievementListenerInterface.h"
#include "AchievementData.generated.h"

class UOrangeAchievementManager;

UCLASS(Blueprintable)
class GAMEPROJECT_API UAchievementData : public UObject, public IOrangeAchievementListenerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOrangeAchievementManager* MyAchievementManager;
    
public:
    UAchievementData();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AchievementUnlockComplete(bool bSuccessful);
    
    
    // Fix for true pure virtual functions not being implemented
};

