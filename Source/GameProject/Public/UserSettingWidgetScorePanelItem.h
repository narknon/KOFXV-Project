#pragma once
#include "CoreMinimal.h"
#include "UserSettingWidgetBase.h"
#include "UserSettingWidgetScorePanelItem.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UUserSettingWidgetScorePanelItem : public UUserSettingWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_value;
    
    UUserSettingWidgetScorePanelItem();
};

