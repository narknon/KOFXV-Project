#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EOnlineProfileListType.h"
#include "OnlineProfile_List.generated.h"

class UTitleWindowWidget;
class UImage;
class UScrollBox;
class UOnlineProfile_ListItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineProfile_List : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTitleWindowWidget* WBP_99_wdwA_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* arrow_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* arrow_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOnlineProfile_ListItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineProfile_ListItem* CurrentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UOnlineProfile_ListItem*> ItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineProfileListType NowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentItemNum;
    
public:
    UOnlineProfile_List();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFollowNum(int32 FollowNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFOLLOW_MAX_NUM() const;
    
};

