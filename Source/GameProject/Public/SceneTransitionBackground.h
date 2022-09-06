#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ETransitionBackGroundType.h"
#include "SceneTransitionBackground.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USceneTransitionBackground : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<ETransitionBackGroundType, UWidget*> WidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransitionBackGroundType CurrentMode;
    
public:
    USceneTransitionBackground();
    UFUNCTION(BlueprintCallable)
    void SetBackgroundType(ETransitionBackGroundType Type);
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetBackgroundWidget();
    
};

