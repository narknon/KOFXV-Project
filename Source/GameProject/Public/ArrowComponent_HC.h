#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "ArrowComponent_HC.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPROJECT_API UArrowComponent_HC : public UArrowComponent {
    GENERATED_BODY()
public:
    UArrowComponent_HC();
};

