#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "TimerHUDNumWidget.generated.h"

class UTexture2D;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTimerHUDNumWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* timer_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> NumTextureArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* timer_num_red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> RedNumTextureArray;
    
public:
    UTimerHUDNumWidget();
};

