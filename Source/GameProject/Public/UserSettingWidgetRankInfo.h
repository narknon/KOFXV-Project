#pragma once
#include "CoreMinimal.h"
#include "UserSettingWidgetBase.h"
#include "UserSettingWidgetRankInfo.generated.h"

class URankResultRankIconItemWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UUserSettingWidgetRankInfo : public UUserSettingWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankResultRankIconItemWidget* WBP_03_00_icon_star_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankResultRankIconItemWidget* WBP_03_00_icon_star_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankResultRankIconItemWidget* WBP_03_00_icon_star_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankResultRankIconItemWidget* WBP_03_00_icon_star_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankResultRankIconItemWidget* WBP_03_00_icon_star_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* RankNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_championStar;
    
    UUserSettingWidgetRankInfo();
};

