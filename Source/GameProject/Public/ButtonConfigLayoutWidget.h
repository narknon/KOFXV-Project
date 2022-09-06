#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_MultiActionScene.h"
#include "ButtonConfigLayoutWidget.generated.h"

class UButtonConfigWidget;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UButtonConfigLayoutWidget : public UOperationalWidget_MultiActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UButtonConfigWidget*> ButtonConfigWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ButtonTextureTable;
    
public:
    UButtonConfigLayoutWidget();
};

