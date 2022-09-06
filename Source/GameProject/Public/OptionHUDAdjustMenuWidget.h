#pragma once
#include "CoreMinimal.h"
#include "OptionBaseWidget.h"
#include "OptionHUDAdjustMenuWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOptionHUDAdjustMenuWidget : public UOptionBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_99_wdwA_92_03;
    
public:
    UOptionHUDAdjustMenuWidget();
};

