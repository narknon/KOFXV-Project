#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "CasualMatchSettingWindow.generated.h"

class UUserSettingWidgetCasualMatch;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCasualMatchSettingWindow : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserSettingWidgetCasualMatch* WBP_03_01_userInfo;
    
    UCasualMatchSettingWindow();
};

