#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OrangeAchievementListenerInterface.generated.h"

UINTERFACE(Blueprintable)
class GAMEPROJECT_API UOrangeAchievementListenerInterface : public UInterface {
    GENERATED_BODY()
};

class GAMEPROJECT_API IOrangeAchievementListenerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AchievementUnlockComplete(bool bSuccessful);
    
};

