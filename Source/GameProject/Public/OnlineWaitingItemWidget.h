#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "OnlineWaitingItemWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineWaitingItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_name;
    
public:
    UOnlineWaitingItemWidget();
};

