#pragma once
#include "CoreMinimal.h"
#include "TimerHUDWidget.h"
#include "SelectTimerDelegate.h"
#include "SelectTimer.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USelectTimer : public UTimerHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectTimer SelectTimerDone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimerStoped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealTime;
    
public:
    USelectTimer();
    UFUNCTION(BlueprintCallable)
    void StopTimer(bool Stop);
    
    UFUNCTION(BlueprintCallable)
    void SetTimer(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void SetCountFocre(int32 NewCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckTimerCount();
    
};

