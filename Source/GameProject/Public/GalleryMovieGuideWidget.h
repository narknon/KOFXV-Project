#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "GalleryMovieGuideWidget.generated.h"

class UGuideItemArrayWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGalleryMovieGuideWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* WBP_GuideItemArray;
    
public:
    UGalleryMovieGuideWidget();
};

