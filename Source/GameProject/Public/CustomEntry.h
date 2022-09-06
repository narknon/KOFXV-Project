#pragma once
#include "CoreMinimal.h"
#include "JukeboxBase.h"
#include "CustomEntry.generated.h"

class UVerticalBox;
class UHaveGuideWindow;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCustomEntry : public UJukeboxBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* CustomListVerticalBox;
    
    UCustomEntry();
};

