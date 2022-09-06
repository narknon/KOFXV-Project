#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "GalleryMovieItemWidget.generated.h"

class UImage;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGalleryMovieItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* newImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_icon;
    
public:
    UGalleryMovieItemWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemStateUnSele();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemStateSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemStateSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemStateNormal();
    
};

