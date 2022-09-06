#pragma once
#include "CoreMinimal.h"
#include "OptionItemWidgetA.h"
#include "Handicap.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UHandicap : public UOptionItemWidgetA {
    GENERATED_BODY()
public:
    UHandicap();
};

