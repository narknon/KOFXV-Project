#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "GalleryLayoutWidget.generated.h"

class UGalleryMovieWidget;
class USelectorWidget;
class UGalleryVoiceWidget;
class UMovieWidget;
class UCreditWidget;
class UGalleryMovieGuideWidget;
class UFadeWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGalleryLayoutWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGalleryMovieWidget* WBP_09_panelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGalleryVoiceWidget* WBP_09_voiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelectorWidget* WBP_95_01_selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovieWidget* WBP_Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGalleryMovieGuideWidget* WBP_09_preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFadeWidget* WBP_Fade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCreditWidget* CreditWidget;
    
public:
    UGalleryLayoutWidget();
};

