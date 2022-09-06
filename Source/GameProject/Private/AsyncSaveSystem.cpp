#include "AsyncSaveSystem.h"

class USystemData;
class UPersistentUserData;
class UReplayData;
class UGameData;

void UAsyncSaveSystem::UpdateSaveFile(bool doSaveAI, const int32 slotId) {
}

void UAsyncSaveSystem::Save(ESaveDataType Type, const int32 slotId) {
}

void UAsyncSaveSystem::Load(ESaveDataType Type, const int32 slotId, int32 UserIndex) {
}

USystemData* UAsyncSaveSystem::GetSystemData(const int32 slotId) {
    return NULL;
}

UPersistentUserData* UAsyncSaveSystem::GetSaveData(const int32 slotId) {
    return NULL;
}

UReplayData* UAsyncSaveSystem::GetReplayData(const int32 slotId) {
    return NULL;
}

UGameData* UAsyncSaveSystem::GetGameData(const int32 slotId) {
    return NULL;
}

UAsyncSaveSystem::UAsyncSaveSystem() {
    this->SaveStatus = EOnionSaveResults::Idle;
    this->SaveData.AddDefaulted(4);
}

