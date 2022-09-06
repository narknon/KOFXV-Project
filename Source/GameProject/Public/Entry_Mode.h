#pragma once
#include "CoreMinimal.h"
#include "OptionItemWidgetA.h"
#include "Entry_Mode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UEntry_Mode : public UOptionItemWidgetA {
    GENERATED_BODY()
public:
    UEntry_Mode();
};

