#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "JukeboxCharaWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UJukeboxCharaWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UJukeboxCharaWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTexture2D* LoadCharaTexture(const FString& Path);
    
};

