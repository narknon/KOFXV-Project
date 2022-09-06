#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "BattleHudBase.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UBattleHudBase : public UBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UWidgetAnimation*, bool> LoopAnimationsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> PausedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameUiSpeed;
    
public:
    UBattleHudBase();
protected:
    UFUNCTION(BlueprintCallable)
    void setUserWidgetPaused(bool paused);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool getUserWidgetPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameUiSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void GamePlaySpeedChange(int32 Speed);
    
};

