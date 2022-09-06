#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "Fonts/SlateFontInfo.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "GuideItemArrayWidget.generated.h"

class UDataTable;
class UGuideItemWidget;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGuideItemArrayWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UGuideItemWidget*> GuideArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHorizontalBox* GuideBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GuideTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo OverrideFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideButtonSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OverrideButtonSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideFontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor OverrideFontColor;
    
public:
    UGuideItemArrayWidget();
    UFUNCTION(BlueprintCallable)
    void SetOverrideFontColor(bool UseOverrideFontColor, const FSlateColor& InFontCollor);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideFont(bool UseOverrideFont, const FSlateFontInfo& InFontInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideButtonSize(bool UseOverrideSize, const FVector2D& InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetGuide(FName DataTableRowName);
    
};

