#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EGuidePosition.h"
#include "GuideLayoutWidget.generated.h"

class UGuideItemArrayWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGuideLayoutWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* LeftGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* CenterGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* RightGuide;
    
public:
    UGuideLayoutWidget();
    UFUNCTION(BlueprintCallable)
    void SetGuide(EGuidePosition GuidePosition, FName DataTableRowName);
    
    UFUNCTION(BlueprintCallable)
    void SelectUseGuide(EGuidePosition GuidePosition, EGuidePosition GuidePositionSub);
    
};

