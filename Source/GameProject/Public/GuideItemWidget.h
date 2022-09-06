#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "GuideItemWidget.generated.h"

class UImage;
class UGuideUniqueItemWidget;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGuideItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* NormalGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideUniqueItemWidget* WBP_99_guide_unique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* RedArrow;
    
public:
    UGuideItemWidget();
};

