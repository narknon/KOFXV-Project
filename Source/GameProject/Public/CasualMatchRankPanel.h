#pragma once
#include "CoreMinimal.h"
#include "UserSettingWidgetBase.h"
#include "CasualMatchRankPanel.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCasualMatchRankPanel : public UUserSettingWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* RankNameText;
    
    UCasualMatchRankPanel();
};

