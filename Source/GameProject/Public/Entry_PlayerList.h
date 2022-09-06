#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OptionItemWidgetA.h"
#include "EUiOperation.h"
#include "SystemWindowEvents.h"
#include "Entry_PlayerList.generated.h"

class UScrollBox;
class UEntry_PlayerList_Item;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UEntry_PlayerList : public UOptionItemWidgetA {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* PlayerListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntry_PlayerList_Item> ItemClass;
    
    UPROPERTY(EditAnywhere)
    uint8 PageItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UEntry_PlayerList_Item*> ItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSideCursorVisiable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerOneOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemWindowEvents ClearOneSystemWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemWindowEvents AllClearSystemWindow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTextEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEntry_PlayerList_Item> EditingObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEntry_PlayerList_Item* LastSelectItem;
    
public:
    UEntry_PlayerList();
protected:
    UFUNCTION(BlueprintCallable)
    void TriangleButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void SaveItemData();
    
    UFUNCTION(BlueprintCallable)
    void OptionButtonPressed(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ItemSelect(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void ItemContentClear();
    
    UFUNCTION(BlueprintCallable)
    void ItemContentAllClear();
    
    UFUNCTION(BlueprintCallable)
    void ItemConfirm();
    
    UFUNCTION(BlueprintCallable)
    void ItemCancel(int32 PlayerID, EUiOperation Operation);
    
private:
    UFUNCTION(BlueprintCallable)
    void GenerateItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindow();
    
};

