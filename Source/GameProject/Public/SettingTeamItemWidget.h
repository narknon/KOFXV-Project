#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "SettingTeamItemWidget.generated.h"

class URegisterTeamWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingTeamItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URegisterTeamWidget* WBP_95_00_register_team;
    
public:
    USettingTeamItemWidget();
};

