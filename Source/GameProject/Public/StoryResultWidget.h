#pragma once
#include "CoreMinimal.h"
#include "ResultBaseWidget.h"
#include "StoryResultWidget.generated.h"

class UResultDataBaseWidget;
class UStoryResultScoreWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UStoryResultWidget : public UResultBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultDataBaseWidget* WBP_94_mode_offline_side_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStoryResultScoreWidget* WBP_94_mode_offline_side_R;
    
public:
    UStoryResultWidget();
};

