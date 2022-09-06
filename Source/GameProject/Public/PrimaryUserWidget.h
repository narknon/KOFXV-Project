#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PrimaryUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPrimaryUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPrimaryUserWidget();
};

