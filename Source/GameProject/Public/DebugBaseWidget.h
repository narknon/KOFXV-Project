#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "DebugBaseWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UDebugBaseWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UDebugBaseWidget();
};

