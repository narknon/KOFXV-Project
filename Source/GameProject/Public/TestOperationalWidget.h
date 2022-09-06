#pragma once
#include "CoreMinimal.h"
#include "InputBaseUserWidget.h"
#include "TestOperationalWidget.generated.h"

class UOperationalWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTestOperationalWidget : public UInputBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOperationalWidget* TestingWidget;
    
    UTestOperationalWidget();
};

