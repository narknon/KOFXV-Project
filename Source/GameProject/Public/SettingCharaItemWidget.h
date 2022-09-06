#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "SettingCharaItemWidget.generated.h"

class URegisterCharaWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingCharaItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URegisterCharaWidget* WBP_95_00_register_chara;
    
public:
    USettingCharaItemWidget();
};

