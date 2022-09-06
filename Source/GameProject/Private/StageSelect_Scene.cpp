#include "StageSelect_Scene.h"

void UStageSelect_Scene::UpdateSettingSoundListWidgetAction(int32 PlayerID, EUiOperation Operation) {
}

void UStageSelect_Scene::UpdateSettingSoundListWidget(int32 PlayerID, EUiOperation Operation) {
}

void UStageSelect_Scene::UpdateSettingJacketListWidgetAction(int32 PlayerID, EUiOperation Operation) {
}

void UStageSelect_Scene::UpdateSettingJacketListWidget(int32 PlayerID, EUiOperation Operation) {
}

void UStageSelect_Scene::StageSelect_wdw_Next_Implementation(int32 PlayerID, EUiOperation Operation) {
}

bool UStageSelect_Scene::StageSelect_wdw_Bind() {
    return false;
}

void UStageSelect_Scene::StageSelect_wdw_Back_Implementation(int32 PlayerID, EUiOperation Operation) {
}

void UStageSelect_Scene::OpenSoundCustomize(EStageID StageID) {
}

void UStageSelect_Scene::OpenCustomizeSoundList(EStageID StageID, const FString& BGMName) {
}

void UStageSelect_Scene::ConfirmDjStation(const FString& BGMName) {
}

void UStageSelect_Scene::CloseSoundCustomize(EStageID StageID, const FString& BGMName) {
}

void UStageSelect_Scene::CloseDjStation(EStageID StageID, const FString& BGMName) {
}

UStageSelect_Scene::UStageSelect_Scene() {
    this->GuideItemArray = NULL;
    this->SoundCustomiaze = NULL;
    this->SettingSoundItemWidget = NULL;
    this->SettingJacketItemWidget = NULL;
}

