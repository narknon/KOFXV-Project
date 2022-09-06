#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EEnterStep.h"
#include "EUiOperation.h"
#include "Entry_Layout.generated.h"

class UEntry_ModeLayout;
class UEntry_ControllerSide;
class UOperationalWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UEntry_Layout : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_ModeLayout* WBP_ANIM_wdw_A_EntryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_ControllerSide* WBP_92_00_ControllerSide_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_ControllerSide* WBP_92_00_ControllerSide_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOperationalWidget* WBP_99_wdw_Confirm;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UEntry_ControllerSide*> ControllerSideAry;
    
public:
    UEntry_Layout();
protected:
    UFUNCTION(BlueprintCallable)
    bool TemporaryAssignPlayerConttoler(int32 PlayerID, int32 ControllerId, bool IsKeyBoard);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorToCurrentSection();
    
    UFUNCTION(BlueprintCallable)
    void InitControllerAssign();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EntrySkipToSection(EEnterStep ToStep);
    
    UFUNCTION(BlueprintCallable)
    void ControllerSelectEntry(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ControllerSelectConfirm_R(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ControllerSelectConfirm_L(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ControllerSelectCancel_R(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ControllerSelectCancel_L(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void BacktoMainMenu(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void AssignPlayerConttoler();
    
};

