#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "TutorialLayoutWidget.generated.h"

class UTutorialMenuWidget;
class UFadeWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTutorialLayoutWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTutorialMenuWidget* WBP_06_TutorialList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFadeWidget* WBP_Fade;
    
    UTutorialLayoutWidget();
};

