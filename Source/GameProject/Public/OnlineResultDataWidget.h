#pragma once
#include "CoreMinimal.h"
#include "ResultDataBaseWidget.h"
#include "OnlineResultDataWidget.generated.h"

class UResultPlayerInfoWidget;
class UTextBlock;
class UResultOnlineIDWidget;
class UResultLineSpeedWidget;
class UImage;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineResultDataWidget : public UResultDataBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultOnlineIDWidget* WBP_94_panel_id;
    
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
    UOnlineResultDataWidget();
};

