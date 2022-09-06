#include "GameProjectGameInstance.h"

class AFightingGameState;
class ADebugMenu;

void UGameProjectGameInstance::UpdateSoundManager() {
}


void UGameProjectGameInstance::ShutdownSoundManager() {
}

void UGameProjectGameInstance::SetFightingGameState(AFightingGameState* setData) {
}

void UGameProjectGameInstance::SetDebugMenuExecuteSceneState(EDebugMenuExecuteSceneState sceneState) {
}

void UGameProjectGameInstance::SetDebugMenu(ADebugMenu* setData) {
}

void UGameProjectGameInstance::SetBGMEventName(const FString& event_name) {
}

void UGameProjectGameInstance::LoadSoundBank(const FString& bank_name) {
}

void UGameProjectGameInstance::InitSoundManager() {
}

int32 UGameProjectGameInstance::GetInitializePlayerControllerIdSafe() const {
    return 0;
}

AFightingGameState* UGameProjectGameInstance::GetFightingGameState() {
    return NULL;
}

EDebugMenuExecuteSceneState UGameProjectGameInstance::GetDebugMenuExecuteSceneState() {
    return EDebugMenuExecuteSceneState::NONE;
}

ADebugMenu* UGameProjectGameInstance::GetDebugMenu() {
    return NULL;
}

void UGameProjectGameInstance::FoldPlayedBGMFlag() {
}

void UGameProjectGameInstance::ExecuteTaskQueue() {
}

void UGameProjectGameInstance::EnqueueTaskQueue(FGameInstanceGameParametersTaskData _taskData) {
}

UGameProjectGameInstance::UGameProjectGameInstance() {
    this->FightingGameState = NULL;
    this->DebugMenu = NULL;
    this->InterLevelPersistentValue = 0;
    this->m_pBattleParam = NULL;
    this->m_pCameraParam = NULL;
    this->m_pSystemParam = NULL;
    this->m_pActionDebugParam = NULL;
    this->m_pKakeaiSetting = NULL;
    this->m_pCategorySetting = NULL;
    this->m_pStorySetting = NULL;
    this->m_pCharacterCostumeParam = NULL;
    this->ActivityManager = NULL;
}

