#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "ECheckOnlineResult.h"
#include "ReplayMakePageData.h"
#include "ReplayOnlineReadData.h"
#include "ReplayPageData.h"
#include "ReplayListWidget.generated.h"

class UImage;
class UScrollBox;
class UReplay_Layout;
class UTitleWindowWidget;
class UTextBlock;
class UReplayList_ItemWidget;
class UHaveGuideWindowOnline;
class UBaseWidget;
class UScrollBoxSlot;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UReplayListWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTitleWindowWidget* WBP_99_wdwA_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindowOnline* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* arrow_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* arrow_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayList_ItemWidget> ItemClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplay_Layout* ParentReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* ParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBoxSlot* SlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayOnlineReadData OnlineReadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayMakePageData> NextMakePageDataAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayMakePageData> PrevPageDataAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayPageData> NowPageDataAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplayList_ItemWidget* CurrentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayPageData> BackUpNowPageDataAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplayList_ItemWidget* BackUpCurrentItem;
    
public:
    UReplayListWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnCheckNetwork_ListChange(ECheckOnlineResult Result);
    
};

