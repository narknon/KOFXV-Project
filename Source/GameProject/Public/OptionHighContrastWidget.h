#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "OptionHighContrastWidget.generated.h"

class UProgressBar;
class UHaveGuideWindowOnline;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOptionHighContrastWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindowOnline* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_contrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_percent;
    
public:
    UOptionHighContrastWidget();
};

