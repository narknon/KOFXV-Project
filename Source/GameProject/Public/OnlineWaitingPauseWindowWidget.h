#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "OnlineWaitingPauseWindowWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineWaitingPauseWindowWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_C_249;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_C_527;
    
public:
    UOnlineWaitingPauseWindowWidget();
};

