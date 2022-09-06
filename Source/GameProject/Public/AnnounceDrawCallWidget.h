#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AnnounceDrawCallWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnounceDrawCallWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UAnnounceDrawCallWidget();
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundByName(const FString& SoundEventName);
    
    UFUNCTION(BlueprintCallable)
    void FinishDrawCall();
    
};

