#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "ELoginResult.h"
#include "StartUpLayoutWidget.generated.h"

class UTitleWidget;
class UStartUpWidget;
class UAgreementWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UStartUpLayoutWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStartUpWidget* WBP_00_00_StartUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTitleWidget* WBP_00_01_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAgreementWidget* WBP_00_02_Agreement;
    
public:
    UStartUpLayoutWidget();
private:
    UFUNCTION(BlueprintCallable)
    void LoginComp(ELoginResult Result);
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindow();
    
};

