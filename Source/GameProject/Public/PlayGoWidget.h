#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "PlayGoWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPlayGoWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_message;
    
public:
    UPlayGoWidget();
};

