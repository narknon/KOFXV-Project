#pragma once
#include "CoreMinimal.h"
#include "OptionItemWidgetA.h"
#include "Entry_VersusSetting.generated.h"

class UBaseWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UEntry_VersusSetting : public UOptionItemWidgetA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_99_guide_message;
    
    UEntry_VersusSetting();
};

