#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "RankResultRankIconUnitWidget.generated.h"

class URankResultRankIconItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankResultRankIconUnitWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankResultRankIconItemWidget* WBP_03_00_icon_star_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_03_00_icon_star_protect;
    
    URankResultRankIconUnitWidget();
};

