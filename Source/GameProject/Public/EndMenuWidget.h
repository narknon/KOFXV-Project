#pragma once
#include "CoreMinimal.h"
#include "EEndMenu.h"
#include "BaseWidget.h"
#include "EndMenuWidget.generated.h"

class UUserWidget;
class UPauseMenuItemConfirmButtonWidget;
class UHaveGuideWindow;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UEndMenuWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_ANIM_wdw_620;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPauseMenuItemConfirmButtonWidget*> EndMenuItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MenuTextArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndMenu m_EndMenuID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA_92_03;
    
    UEndMenuWidget();
    UFUNCTION(BlueprintCallable)
    void SystemWindowCancelInputFunction();
    
    UFUNCTION(BlueprintCallable)
    void SystemWindowCancelFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenuArrayEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEndMenuTextEvent();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToTutorialMenuWindowOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToTrialMenuWindowOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMemberSelectWindowOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenuWindowOKFunction();
    
};

