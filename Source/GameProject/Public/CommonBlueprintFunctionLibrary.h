#pragma once
#include "CoreMinimal.h"
#include "ESaveDataType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CommonBlueprintFunctionLibrary.generated.h"

class USystemData;
class UReplayData;
class UAsyncSaveSystem;
class UPersistentUserData;
class UGameData;
class UObject;

UCLASS(Blueprintable)
class GAMEPROJECT_API UCommonBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCommonBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateSaveFile(bool doSaveAI, const int32 slotId);
    
    UFUNCTION(BlueprintCallable)
    static void SaveDataInit(ESaveDataType Type, const int32 slotId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USystemData* GetSystemData(const int32 slotId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAsyncSaveSystem* GetSaveSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPersistentUserData* GetSaveData(const int32 slotId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UReplayData* GetReplayData(const int32 slotId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameData* GetGameData(const int32 slotId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDebugLevel();
    
    UFUNCTION(BlueprintCallable)
    static void Create(UClass* ObjectClass, UObject*& CreatedObject);
    
};

