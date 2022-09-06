#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "GuideUniqueItemWidget.generated.h"

class UImage;
class UTextBlock;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGuideUniqueItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock_buttonGuide_unique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* RedTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* BlueArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BehindTextBlock;
    
public:
    UGuideUniqueItemWidget();
};

