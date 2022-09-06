#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "TutorialMenuItemWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTutorialMenuItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_A_Bold_C_376;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_99_check;
    
    UTutorialMenuItemWidget();
};

