#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "OnlineWaitingFailedWindowWidget.generated.h"

class UTextBlock;
class UOnlineWaitingItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineWaitingFailedWindowWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineWaitingItemWidget* WBP_99_icon_waiting_item;
    
public:
    UOnlineWaitingFailedWindowWidget();
};

