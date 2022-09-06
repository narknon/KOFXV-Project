#pragma once
#include "CoreMinimal.h"
#include "HaveGuideWindow.h"
#include "HaveGuideWindowOnline.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UHaveGuideWindowOnline : public UHaveGuideWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UHaveGuideWindowOnline();
};

