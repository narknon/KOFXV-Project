#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "ERoomMenuCursorIndex.h"
#include "EUiOperation.h"
#include "RoomMenuInfo.h"
#include "RoomMenuWindow.generated.h"

class USizeBox;
class UHaveGuideWindowOnline;
class UTextBlock;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomMenuWindow : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindowOnline* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USizeBox* ExplanationColumnSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_guideMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* ItemVerticalBox;
    
    URoomMenuWindow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemText(const FRoomMenuInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCursorIndex(const ERoomMenuCursorIndex& PreIndex, const ERoomMenuCursorIndex& Index);
    
    UFUNCTION(BlueprintCallable)
    void OpenCommandList();
    
    UFUNCTION(BlueprintCallable)
    void OpenButtonConfig();
    
    UFUNCTION(BlueprintCallable)
    void OpenBattleSetting();
    
    UFUNCTION(BlueprintCallable)
    void CloseCommandList(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseButtonConfig(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseBattleSetting(int32 PlayerID, EUiOperation Operation);
    
};

