#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "HaveGuideWindow.generated.h"

class UGuideItemArrayWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UHaveGuideWindow : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* GuideWidget;
    
    UHaveGuideWindow();
};

