#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "BossChallengeMenuItemWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UBossChallengeMenuItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* icon;
    
    UBossChallengeMenuItemWidget();
};

