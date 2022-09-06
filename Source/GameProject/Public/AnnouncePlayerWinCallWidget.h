#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AnnouncePlayerWinCallWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnouncePlayerWinCallWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UAnnouncePlayerWinCallWidget();
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundByName(const FString& SoundEventName);
    
    UFUNCTION(BlueprintCallable)
    void FinishPlayerWinsCall();
    
};

