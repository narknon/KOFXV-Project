#pragma once
#include "CoreMinimal.h"
#include "UserSettingWidgetBase.h"
#include "UserSettingWidgetScore.generated.h"

class UUserSettingWidgetScorePanelItem;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UUserSettingWidgetScore : public UUserSettingWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetScorePanelItem* NumberOfWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetScorePanelItem* NumberOfDefeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetScorePanelItem* NumberOfDraws;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetScorePanelItem* WinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetScorePanelItem* MaximumNumberOfConsecutiveWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetScorePanelItem* CurrentNumberOfConsecutiveWins;
    
    UUserSettingWidgetScore();
};

