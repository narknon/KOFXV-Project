#include "CommonBlueprintFunctionLibrary.h"

class USystemData;
class UReplayData;
class UAsyncSaveSystem;
class UPersistentUserData;
class UGameData;
class UObject;

void UCommonBlueprintFunctionLibrary::UpdateSaveFile(bool doSaveAI, const int32 slotId) {
}

void UCommonBlueprintFunctionLibrary::SaveDataInit(ESaveDataType Type, const int32 slotId) {
}

USystemData* UCommonBlueprintFunctionLibrary::GetSystemData(const int32 slotId) {
    return NULL;
}

UAsyncSaveSystem* UCommonBlueprintFunctionLibrary::GetSaveSystem() {
    return NULL;
}

UPersistentUserData* UCommonBlueprintFunctionLibrary::GetSaveData(const int32 slotId) {
    return NULL;
}

UReplayData* UCommonBlueprintFunctionLibrary::GetReplayData(const int32 slotId) {
    return NULL;
}

UGameData* UCommonBlueprintFunctionLibrary::GetGameData(const int32 slotId) {
    return NULL;
}

int32 UCommonBlueprintFunctionLibrary::GetDebugLevel() {
    return 0;
}

void UCommonBlueprintFunctionLibrary::Create(UClass* ObjectClass, UObject*& CreatedObject) {
}

UCommonBlueprintFunctionLibrary::UCommonBlueprintFunctionLibrary() {
}

