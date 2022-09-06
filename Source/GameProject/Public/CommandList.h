#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseWidget.h"
#include "ECharacterID.h"
#include "CommandListData.h"
#include "CommandList.generated.h"

class UDataTable;
class UUserWidget;
class UHorizontalBox;
class UOverlay;
class UTextBlock;
class UTitleWindowWidget;
class UCommandList_Chara;
class UPageNavi_Cursor;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCommandList : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_pageNavi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTitleWindowWidget* WBP_99_wdwA_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_ANIM_wdw_A_1100_Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommandList_Chara* NowCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UCommandList_Chara*> NowCommandListAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CommandCharaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterID, FCommandListData> CharaListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPageNavi_Cursor*> PageNaviAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> CategoryNameAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommandList_Chara> DefaultListClass;
    
public:
    UCommandList();
    UFUNCTION(BlueprintCallable)
    void PageNext();
    
    UFUNCTION(BlueprintCallable)
    void PageBack();
    
    UFUNCTION(BlueprintCallable)
    void InitiliazeListData();
    
};

