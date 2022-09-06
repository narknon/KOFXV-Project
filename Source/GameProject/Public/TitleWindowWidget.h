#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EButtonType.h"
#include "TitleWindowWidget.generated.h"

class UImage;
class UTextBlock;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UTitleWindowWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* btn_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* btn_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* arrow_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* arrow_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UImage*> ButtonImageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UImage*> ArrowImageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonType buttonL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonType buttonR;
    
public:
    UTitleWindowWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonGuide(bool is_keyboard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPageText(int32 Now, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void ChangeButtonGuide(EButtonType NewButtonL, EButtonType NewButtonR);
    
};

