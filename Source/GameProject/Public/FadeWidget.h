#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "FadeWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UFadeWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* FadeImage;
    
public:
    UFadeWidget();
    UFUNCTION(BlueprintCallable)
    void KillFade();
    
    UFUNCTION(BlueprintCallable)
    bool IsFade();
    
    UFUNCTION(BlueprintCallable)
    void InitFade(float FadeFrame, bool White, bool FadeIn);
    
    UFUNCTION(BlueprintCallable)
    void DoFade();
    
};

