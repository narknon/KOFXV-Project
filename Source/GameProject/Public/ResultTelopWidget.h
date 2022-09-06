#pragma once
#include "CoreMinimal.h"
#include "TelopBaseWidget.h"
#include "ResultTelopWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultTelopWidget : public UTelopBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_telop;
    
public:
    UResultTelopWidget();
};

