#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "RankStar.generated.h"

class URankResultRankIconItemWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankStar : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankResultRankIconItemWidget* icon_star;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* icon_star_protect;
    
    URankStar();
};

