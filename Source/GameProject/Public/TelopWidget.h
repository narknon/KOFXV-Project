#pragma once
#include "CoreMinimal.h"
#include "TelopBaseWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "Fonts/SlateFontInfo.h"
#include "EMovieTelopType.h"
#include "MovieJimakuData.h"
#include "TelopWidget.generated.h"

class UTextBlock;
class UMediaPlayer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTelopWidget : public UTelopBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TelopText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TelopText_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TelopText_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TelopText_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MyMedia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo DefaultFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo CustomFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTelopBaseWidget* NormalTelopWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTelopBaseWidget* UseTelopWidget;
    
public:
    UTelopWidget();
    UFUNCTION(BlueprintCallable)
    void StartTelopTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetTelopVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetTelopType(EMovieTelopType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTelopData(const TArray<FMovieJimakuData>& InJimakuData);
    
    UFUNCTION(BlueprintCallable)
    void EndTelopTimer();
    
};

