#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "OperationalWidget_SinglerActionScene.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOperationalWidget_SinglerActionScene : public UOperationalWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOperationalWidget* currentWidget;
    
public:
    UOperationalWidget_SinglerActionScene();
protected:
    UFUNCTION(BlueprintCallable)
    void setCurrentWidget(UOperationalWidget* in_target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOperationalWidget* getCurrentWidget();
    
};

