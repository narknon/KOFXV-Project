#pragma once
#include "CoreMinimal.h"
#include "OnlineResultState.h"
#include "OperationalWidget.h"
#include "EPlayerID.h"
#include "AkGameplayTypes.h"
#include "EUiOperation.h"
#include "ResultMenuWindowWidget.generated.h"

class UResultMenuTimerWidget;
class UAkCallbackInfo;
class UHaveGuideWindow;
class UCommon_99_ItemA;
class UResultMenuCursorWidget;
class UGameInstanceGameParameters;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultMenuWindowWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultMenuTimerWidget* WBP_94_num_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UCommon_99_ItemA*> ItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UResultMenuCursorWidget*> CursorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MenuTextArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameInstanceGameParameters* GameInstanceGameParameters;
    
public:
    UResultMenuWindowWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetResultMenuTextEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnStartRematchDispatcher();
    
    UFUNCTION(BlueprintCallable)
    void OnReturnOrderSelectDispatcher();
    
    UFUNCTION(BlueprintCallable)
    void OnReturnMemberSelectDispatcher();
    
    UFUNCTION(BlueprintCallable)
    void OnGoToRoomMatchDispatcher();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedResultStateDispatcher(EPlayerID PlayerID, FOnlineResultState CursorState);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleFinishedDispatcher();
    
    UFUNCTION(BlueprintCallable)
    void DoTransition(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable)
    void CloseProfile(int32 PlayerID, EUiOperation Operation);
    
private:
    UFUNCTION(BlueprintCallable)
    void CloseBattleSetting(int32 PlayerID, EUiOperation Operation);
    
};

