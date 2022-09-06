#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AnnounceKOCallWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnounceKOCallWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UAnnounceKOCallWidget();
    UFUNCTION(BlueprintCallable)
    void FinishKOCall();
    
    UFUNCTION(BlueprintCallable)
    void FinishDoubleKOCall();
    
};

