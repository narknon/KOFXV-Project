#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ETransitionBackGroundType.h"
#include "SceneTransitionEffect.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USceneTransitionEffect : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETransitionBackGroundType, UTexture2D*> ModeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransitionBackGroundType CurrentMode;
    
public:
    USceneTransitionEffect();
    UFUNCTION(BlueprintCallable)
    void SetBackgroundType(ETransitionBackGroundType Type);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetModeTexture(ETransitionBackGroundType Type);
    
};

