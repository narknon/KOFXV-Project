#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "ResultAnnounceWidgetOutline.generated.h"

class UImage;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultAnnounceWidgetOutline : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_txt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* p1edge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* p2edge;
    
public:
    UResultAnnounceWidgetOutline();
};

