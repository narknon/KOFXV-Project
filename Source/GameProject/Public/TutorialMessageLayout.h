#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "TutorialMessageLayout.generated.h"

class UTutorialMessage_Start;
class UTutorialMessage_Finish;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTutorialMessageLayout : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTutorialMessage_Start* WBP_90_tutorial_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTutorialMessage_Finish* WBP_90_tutorial_message;
    
public:
    UTutorialMessageLayout();
};

