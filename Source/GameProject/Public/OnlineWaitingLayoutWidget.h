#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "OnlineWaitingLayoutWidget.generated.h"

class UOnlineWaitingWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineWaitingLayoutWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineWaitingWidget* WBP_99_icon_waiting;
    
public:
    UOnlineWaitingLayoutWidget();
};

