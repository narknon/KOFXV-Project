#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AnnounceReadyGoCallWidget.generated.h"

class UAnnounceWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnounceReadyGoCallWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAnnounceWidget* ParentWidget;
    
    UAnnounceReadyGoCallWidget();
    UFUNCTION(BlueprintCallable)
    void StartGoCall();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSoundByName(const FString& SoundEventName);
    
    UFUNCTION(BlueprintCallable)
    void FinishGoCall();
    
};

