#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EIteamStateA99.h"
#include "Common_99_ItemA.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCommon_99_ItemA : public UBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIteamStateA99 LastState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfoWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfoText_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnselOpacity;
    
public:
    UCommon_99_ItemA();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSwitcherIndex(EIteamStateA99 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLastState(EIteamStateA99 NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnselOpacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIteamStateA99 GetLastState() const;
    
};

