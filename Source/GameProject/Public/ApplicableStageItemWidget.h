#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ApplicableStageItemWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UApplicableStageItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_C_C_42;
    
public:
    UApplicableStageItemWidget();
};

