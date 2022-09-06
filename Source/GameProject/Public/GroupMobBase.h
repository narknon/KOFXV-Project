#pragma once
#include "CoreMinimal.h"
#include "Pawn_HC.h"
#include "GroupMobBase.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent_HC;
class USceneComponent_HC;
class UArrowComponent_HC;

UCLASS(Blueprintable)
class GAMEPROJECT_API AGroupMobBase : public APawn_HC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    USceneComponent_HC* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    UArrowComponent_HC* MoveableRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent_HC* SkeletalMeshComponent;
    
    AGroupMobBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isMobMoving();
    
};

