#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "MusicIcon.generated.h"

class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMusicIcon : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_type;
    
    UMusicIcon();
};

