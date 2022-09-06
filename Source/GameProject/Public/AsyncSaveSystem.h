#pragma once
#include "CoreMinimal.h"
#include "SaveQueueNode.h"
#include "UObject/Object.h"
#include "ESaveDataType.h"
#include "EOnionSaveResults.h"
#include "AsyncSaveSystem.generated.h"

class UPersistentUserData;
class USystemData;
class UReplayData;
class UGameData;

UCLASS(Blueprintable)
class GAMEPROJECT_API UAsyncSaveSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOnionSaveResults SaveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveQueueNode> SaveTaskQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveQueueNode CurrentQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPersistentUserData*> SaveData;
    
    UAsyncSaveSystem();
    UFUNCTION(BlueprintCallable)
    void UpdateSaveFile(bool doSaveAI, const int32 slotId);
    
    UFUNCTION(BlueprintCallable)
    void Save(ESaveDataType Type, const int32 slotId);
    
    UFUNCTION(BlueprintCallable)
    void Load(ESaveDataType Type, const int32 slotId, int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USystemData* GetSystemData(const int32 slotId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPersistentUserData* GetSaveData(const int32 slotId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayData* GetReplayData(const int32 slotId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameData* GetGameData(const int32 slotId);
    
};

