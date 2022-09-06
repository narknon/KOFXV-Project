#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AnnouncePerfectCallWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnouncePerfectCallWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UAnnouncePerfectCallWidget();
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundByName(const FString& SoundEventName);
    
    UFUNCTION(BlueprintCallable)
    void FinishPerfectCall();
    
};

