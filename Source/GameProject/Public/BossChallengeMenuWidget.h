#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "BossChallengeMenuWidget.generated.h"

class UTextBlock;
class UHorizontalBox;
class UOnlineWaitingItemWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UBossChallengeMenuWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineWaitingItemWidget* message_item_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineWaitingItemWidget* message_item_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_1;
    
public:
    UBossChallengeMenuWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonGuide(bool is_keyboard);
    
};

