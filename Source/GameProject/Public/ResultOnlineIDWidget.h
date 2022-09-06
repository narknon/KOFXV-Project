#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultOnlineIDWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultOnlineIDWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_99_icon_quitter;
    
public:
    UResultOnlineIDWidget();
};

