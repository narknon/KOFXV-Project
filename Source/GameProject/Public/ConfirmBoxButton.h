#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ConfirmBoxButton.generated.h"

class UCommon_99_ItemA;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UConfirmBoxButton : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommon_99_ItemA* FocusableItem;
    
    UConfirmBoxButton();
};

