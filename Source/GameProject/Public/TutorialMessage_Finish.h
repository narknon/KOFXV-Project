#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "TutorialMessage_Finish.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTutorialMessage_Finish : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* BP_RichTextBlock_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* BP_RichTextBlock_guide;
    
    UTutorialMessage_Finish();
};

