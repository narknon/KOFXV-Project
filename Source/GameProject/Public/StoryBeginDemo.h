#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StoryBeginDemo.generated.h"

class UMediaPlayer;

UCLASS(Blueprintable)
class GAMEPROJECT_API AStoryBeginDemo : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* TestMedia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestMode;
    
    AStoryBeginDemo();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MediaOpenSource(UMediaPlayer* OpenTestMedia);
    
};

