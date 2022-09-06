#pragma once
#include "CoreMinimal.h"
#include "OptionBaseWidget.h"
#include "OptionHDRWidget.generated.h"

class URichTextBlock;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOptionHDRWidget : public UOptionBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* BP_RichTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_99_wdwA_92_03;
    
public:
    UOptionHDRWidget();
};

