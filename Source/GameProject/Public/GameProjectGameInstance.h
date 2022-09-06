#pragma once
#include "CoreMinimal.h"
#include "SceneMgtGameInstance.h"
#include "GamePauseEventDelegate.h"
#include "EDebugMenuExecuteSceneState.h"
#include "GameInstanceGameParametersTaskData.h"
#include "GameProjectGameInstance.generated.h"

class AFightingGameState;
class UDataAssetActionDebugParam;
class ADebugMenu;
class UDataAssetBattleParam;
class UAssetCbas;
class UDataAssetCameraParam;
class UDataAssetSystemParam;
class UDataAssetKakeaiSetting;
class UDataAssetCharaCategorySetting;
class UDataAssetStorySetting;
class UDataAssetCharaCostume;
class UActivityManager;

UCLASS(Blueprintable, NonTransient)
class GAMEPROJECT_API UGameProjectGameInstance : public USceneMgtGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFightingGameState* FightingGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADebugMenu* DebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterLevelPersistentValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetBattleParam* m_pBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetCameraParam* m_pCameraParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetSystemParam* m_pSystemParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAssetCbas*> m_characterParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetActionDebugParam* m_pActionDebugParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetKakeaiSetting* m_pKakeaiSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetCharaCategorySetting* m_pCategorySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetStorySetting* m_pStorySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetCharaCostume* m_pCharacterCostumeParam;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivityManager* ActivityManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamePauseEvent GamePauseEvent;
    
    UGameProjectGameInstance();
    UFUNCTION(BlueprintCallable)
    void UpdateSoundManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnSoundManager();
    
    UFUNCTION(BlueprintCallable)
    void ShutdownSoundManager();
    
    UFUNCTION(BlueprintCallable)
    void SetFightingGameState(AFightingGameState* setData);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMenuExecuteSceneState(EDebugMenuExecuteSceneState sceneState);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMenu(ADebugMenu* setData);
    
    UFUNCTION(BlueprintCallable)
    void SetBGMEventName(const FString& event_name);
    
    UFUNCTION(BlueprintCallable)
    void LoadSoundBank(const FString& bank_name);
    
    UFUNCTION(BlueprintCallable)
    void InitSoundManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitializePlayerControllerIdSafe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingGameState* GetFightingGameState();
    
    UFUNCTION(BlueprintCallable)
    EDebugMenuExecuteSceneState GetDebugMenuExecuteSceneState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADebugMenu* GetDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    void FoldPlayedBGMFlag();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteTaskQueue();
    
    UFUNCTION(BlueprintCallable)
    void EnqueueTaskQueue(FGameInstanceGameParametersTaskData _taskData);
    
};

