#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "DocumentWidget.generated.h"

class UUserWidget;
class UScrollBox;
class UGuideItemArrayWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UDocumentWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_A_C_96;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_00_02_Document_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_00_02_Document_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ItemHeaderArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* GuideWidget;
    
public:
    UDocumentWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void InitScrollPos();
    
};

