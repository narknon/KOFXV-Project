#pragma once
#include "CoreMinimal.h"
#include "PauseMenuPage.h"
#include "OperationalWidget.h"
#include "EUiOperation.h"
#include "PauseMenuWindowWidget.generated.h"

class UOverlay;
class UUserWidget;
class UPauseMenuItemWidget;
class UVerticalBox;
class UHaveGuideWindow;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPauseMenuWindowWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_base_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_base_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_base_C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPauseMenuPage> PageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPauseMenuItemWidget*> PauseMenuItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayAnimFrameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayAnimMenuIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_ANIM_wdw_B_PauseMenu;
    
    UPauseMenuWindowWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonGuide(bool is_keyboard);
    
    UFUNCTION(BlueprintCallable)
    void SystemWindowCancelInputFunction();
    
    UFUNCTION(BlueprintCallable)
    void SystemWindowCancelFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPauseMenuItemTextEvent(int32 nCntItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPauseMenuItemSlateEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPauseMenuItemArrayEvent();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToTutorialMenuWindowOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToTrialMenuOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToOrderSelectWindowOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMemberSelectWindowOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenuWindowOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void ReturnRoom();
    
    UFUNCTION(BlueprintCallable)
    void LeaveRoom();
    
    UFUNCTION(BlueprintCallable)
    void FinishReplayWindowOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void EndTrainingWindowOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void DeleteRecordingSlotWindowOKFunction();
    
    UFUNCTION(BlueprintCallable)
    void CloseCommandList(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseButtonConfig(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseBattleSetting(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void BackToRoomWindowOKFunction();
    
};

