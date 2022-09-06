#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AnnounceCompleteWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnounceCompleteWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UAnnounceCompleteWidget();
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundByName(const FString& SoundEventName);
    
    UFUNCTION(BlueprintCallable)
    void FinishCompleteCall();
    
};

