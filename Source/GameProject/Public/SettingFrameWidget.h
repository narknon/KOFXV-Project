#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "SettingFrameWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingFrameWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_title;
    
    USettingFrameWidget();
};

