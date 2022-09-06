#pragma once
#include "CoreMinimal.h"
#include "GameProjectGameMode.h"
#include "GameModeMenuScene.generated.h"

class ADebugMenu;

UCLASS(Blueprintable, NonTransient)
class GAMEPROJECT_API AGameModeMenuScene : public AGameProjectGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequestedLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADebugMenu* DebugMenuActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstTimeLoadComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameThreadLoadLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReserveLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameThreadLoadLevelName;
    
    AGameModeMenuScene();
    UFUNCTION(BlueprintCallable)
    void RequestTemporarilyStopUiInput(int32 iFrame);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceNextLevel();
    
    UFUNCTION(BlueprintCallable)
    void LoadLevel(FName nextLevel, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoading();
    
    UFUNCTION(BlueprintCallable)
    void DelayLoadCompFunc();
    
    UFUNCTION(BlueprintCallable)
    void CompUnloadStreamLevel();
    
    UFUNCTION(BlueprintCallable)
    void CompLoadStreamLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeOpacity1(FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeOpacity0(FName LevelName);
    
};

