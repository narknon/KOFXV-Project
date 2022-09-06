#pragma once
#include "CoreMinimal.h"
#include "ResultDataBaseWidget.h"
#include "RankResultDataWidget.generated.h"

class UResultPlayerInfoWidget;
class UTextBlock;
class UResultOnlineIDWidget;
class URankResultRankWidget;
class UResultScoreUnitWidget;
class UResultLineSpeedWidget;
class UImage;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URankResultDataWidget : public UResultDataBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultOnlineIDWidget* WBP_94_panel_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultScoreUnitWidget* WBP_94_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URankResultRankWidget* WBP_94_rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultPlayerInfoWidget* WBP_93_playerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultLineSpeedWidget* WBP_icon_lineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_ping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* unit_ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* LineInfoOverlay;
    
public:
    URankResultDataWidget();
};

