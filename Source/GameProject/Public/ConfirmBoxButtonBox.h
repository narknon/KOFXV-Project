#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ConfirmBoxButtonBox.generated.h"

class UConfirmBoxButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UConfirmBoxButtonBox : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UConfirmBoxButton* ConfirmBoxButton;
    
    UConfirmBoxButtonBox();
};

