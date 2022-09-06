#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "ResultAnnounceWidget.generated.h"

class UImage;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultAnnounceWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_txt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* p1base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* p2base;
    
public:
    UResultAnnounceWidget();
};

