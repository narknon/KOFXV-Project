#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RayTracingSetUp.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API ARayTracingSetUp : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRayTracing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableReflection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableShadow;
    
    ARayTracingSetUp();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConsoleCommand(const FString& Command);
    
};

