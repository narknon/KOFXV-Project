#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AnnounceTimeUpCallWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnounceTimeUpCallWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UAnnounceTimeUpCallWidget();
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundByName(const FString& SoundEventName);
    
    UFUNCTION(BlueprintCallable)
    void FinishTimeUpCall();
    
};

