#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "RoomListItemInfo.generated.h"

class UTextBlock;
class UHorizontalBox;
class URoomListItemBox;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomListItemInfo : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* RoomIDText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* OnlineIdText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* RoomCommnetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomListItemBox* RoomListItemBoxTraining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHorizontalBox* RoomListItemHorizontalBox;
    
    URoomListItemInfo();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerNumberText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBattleModeText(const FText& InText);
    
};

