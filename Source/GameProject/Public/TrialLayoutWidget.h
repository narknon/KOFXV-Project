#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "TrialLayoutWidget.generated.h"

class UCostume_Customize;
class UFadeWidget;
class USelectorWidget;
class UTrialSelectWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTrialLayoutWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFadeWidget* WBP_Fade;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelectorWidget* WBP_95_01_selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCostume_Customize* WBP_92_01_costume_customize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTrialSelectWidget* WBP_07_Trial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingKill;
    
public:
    UTrialLayoutWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetPendingKill();
    
    UFUNCTION(BlueprintCallable)
    bool IsPendingkill() const;
    
};

