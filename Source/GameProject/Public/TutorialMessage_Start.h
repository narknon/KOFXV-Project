#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "TutorialMessage_Start.generated.h"

class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTutorialMessage_Start : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_0_titile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* BP_RichTextBlock_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* BP_RichTextBlock_guide;
    
    UTutorialMessage_Start();
};

