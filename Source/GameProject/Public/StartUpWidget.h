#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "StartUpWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UStartUpWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Image_startup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Image_save;
    
public:
    UStartUpWidget();
};

