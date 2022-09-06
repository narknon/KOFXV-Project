#pragma once
#include "CoreMinimal.h"
#include "CreditItemBaseWidget.h"
#include "CreditItemImageWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCreditItemImageWidget : public UCreditItemBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* ItemImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ItemTexture;
    
public:
    UCreditItemImageWidget();
    UFUNCTION(BlueprintCallable)
    void SetImageTexture(UTexture2D* Texture);
    
};

