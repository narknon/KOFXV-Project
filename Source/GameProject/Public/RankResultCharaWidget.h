#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "RankResultCharaWidget.generated.h"

class UResultCharaPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankResultCharaWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultCharaPanelWidget* WBP_94_panel;
    
public:
    URankResultCharaWidget();
};

