#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "StoryResultScoreWidget.generated.h"

class UWidgetSwitcher;
class UTextBlock;
class UResultScoreUnitWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UStoryResultScoreWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultScoreUnitWidget* WBP_94_table_story;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_grade_txt;
    
public:
    UStoryResultScoreWidget();
};

