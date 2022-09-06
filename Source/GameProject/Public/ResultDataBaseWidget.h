#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EPlayerID.h"
#include "ResultDataBaseWidget.generated.h"

class UResultCharaPanelWidget;
class UResultWinLoseWidget;
class UResultEmblemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultDataBaseWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultWinLoseWidget* WBP_94_results_txt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultCharaPanelWidget* WBP_94_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultEmblemWidget* WBP_94_emblem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID PlayerID;
    
public:
    UResultDataBaseWidget();
};

