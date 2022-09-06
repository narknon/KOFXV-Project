#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AkGameplayTypes.h"
#include "SystemWindowWidget.generated.h"

class UConfirmBox;
class UGameInstanceGameParameters;
class UAkCallbackInfo;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USystemWindowWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UConfirmBox* WBP_ConfirmBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameInstanceGameParameters* GameInstanceGameParameters;
    
public:
    USystemWindowWidget();
    UFUNCTION(BlueprintCallable)
    void SystemWindowDecide(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable)
    void SystemWindowCancel(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveItem_3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveItem_2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveItem_1();
    
};

