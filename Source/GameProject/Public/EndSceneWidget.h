#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "EndSceneWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UEndSceneWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
    UEndSceneWidget();
};

