#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultEmblemWidget.generated.h"

class UImage;
class UDataTable;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultEmblemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TeamEmblemTextureTableP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TeamEmblemTextureTableP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BossEmblemTextureTableP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BossEmblemTextureTableP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Image_p1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Image_p2;
    
public:
    UResultEmblemWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEmblemTexture(UTexture2D* Texture);
    
};

