#pragma once
#include "CoreMinimal.h"
#include "ResultBaseWidget.h"
#include "BossResultWidget.generated.h"

class UBossResultDataWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UBossResultWidget : public UResultBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBossResultDataWidget* WBP_94_mode_boss_side;
    
public:
    UBossResultWidget();
};

