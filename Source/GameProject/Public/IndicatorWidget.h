#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EIndicatorType.h"
#include "IndicatorWidget.generated.h"

class UAnimatedImage;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UIndicatorWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAnimatedImage* Load;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAnimatedImage* Save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAnimatedImage* Search;
    
    UIndicatorWidget();
    UFUNCTION(BlueprintCallable)
    void StopIndicatorAnimation(EIndicatorType Type);
    
    UFUNCTION(BlueprintCallable)
    void PlayIndicatorAnimation(EIndicatorType Type);
    
};

