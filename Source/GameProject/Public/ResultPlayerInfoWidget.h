#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultPlayerInfoWidget.generated.h"

class UResultLineSpeedWidget;
class UResultRankWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultPlayerInfoWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultLineSpeedWidget* WBP_icon_lineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultRankWidget* WBP_icon_ranking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_titles;
    
public:
    UResultPlayerInfoWidget();
};

