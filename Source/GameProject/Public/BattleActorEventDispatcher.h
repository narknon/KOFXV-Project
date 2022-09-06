#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESkillType.h"
#include "UObject/NoExportTypes.h"
#include "EBlackoutType.h"
#include "EBlackoutAttr.h"
#include "BattleActorEventDispatcher.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API ABattleActorEventDispatcher : public AActor {
    GENERATED_BODY()
public:
    ABattleActorEventDispatcher();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleEvent_ChangeBlackoutSettings(EBlackoutAttr attribute, EBlackoutType Type, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleEvent_BattleActorDamage(ESkillType skillType);
    
};

