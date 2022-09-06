#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "SettingItemWindowSlotWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingItemWindowSlotWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_title;
    
public:
    USettingItemWindowSlotWidget();
};

