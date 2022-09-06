#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OperationalWidget.h"
#include "CreditWidget.generated.h"

class UTexture2D;
class UCreditItemImageWidget;
class UMovieWidget;
class UCanvasPanel;
class UCreditItemMidashiWidget;
class UCreditItemNameWidget;
class UDataTable;
class UCreditItemBaseWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCreditWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MainCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovieWidget* WBP_Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditItemMidashiWidget> MidashiClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditItemNameWidget> NameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditItemImageWidget> ImageWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ReferenceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreditFrameOutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreditFrameInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TitleLogoFadeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SNKLogoFadeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreditEndSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideImageFadeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OmakeSEFadeSecondsFromMovieEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MovieDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ImageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> SideImageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SideImageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCreditItemBaseWidget* TheBottomWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UCreditItemBaseWidget*> ViewingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UCreditItemBaseWidget*> ItemList;
    
    UCreditWidget();
    UFUNCTION(BlueprintCallable)
    void OnOmakeEndStarted();
    
    UFUNCTION(BlueprintCallable)
    void OmakeEndSEStart();
    
    UFUNCTION(BlueprintCallable)
    void OmakeEndPlay();
    
    UFUNCTION(BlueprintCallable)
    void FadeAfterStop();
    
    UFUNCTION(BlueprintCallable)
    void EndScene();
    
    UFUNCTION(BlueprintCallable)
    void CreditSkip();
    
    UFUNCTION(BlueprintCallable)
    void CreditPlayStop();
    
    UFUNCTION(BlueprintCallable)
    void CreditPlayStart();
    
    UFUNCTION(BlueprintCallable)
    void BGMStart();
    
    UFUNCTION(BlueprintCallable)
    void AddNextCredit();
    
};

