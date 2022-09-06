#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ButtonConfigItemWidget.generated.h"

class UImage;
class USizeBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UButtonConfigItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USizeBox*> IconImageSizeBoxArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UImage*> IconImageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* btn;
    
public:
    UButtonConfigItemWidget();
};

