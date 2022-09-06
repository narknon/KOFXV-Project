#include "GameModeMenuScene.h"

void AGameModeMenuScene::RequestTemporarilyStopUiInput(int32 iFrame) {
}

void AGameModeMenuScene::ReplaceNextLevel() {
}

void AGameModeMenuScene::LoadLevel(FName nextLevel, float FadeTime) {
}

bool AGameModeMenuScene::IsLoading() {
    return false;
}

void AGameModeMenuScene::DelayLoadCompFunc() {
}

void AGameModeMenuScene::CompUnloadStreamLevel() {
}

void AGameModeMenuScene::CompLoadStreamLevel() {
}



AGameModeMenuScene::AGameModeMenuScene() {
    this->DebugMenuActor = NULL;
    this->bFirstTimeLoadComplete = false;
    this->bLoading = false;
    this->bFadeOut = false;
    this->bGameThreadLoadLevel = false;
}

