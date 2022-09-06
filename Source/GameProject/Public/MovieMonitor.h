#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovieMonitor.generated.h"

class UMediaPlayer;

UCLASS(Blueprintable)
class GAMEPROJECT_API AMovieMonitor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinimizePaused;
    
public:
    AMovieMonitor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPauseMovie(bool paused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMinimized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableMovie();
    
};

