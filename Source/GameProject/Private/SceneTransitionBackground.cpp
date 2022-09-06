#include "SceneTransitionBackground.h"

class UWidget;

void USceneTransitionBackground::SetBackgroundType(ETransitionBackGroundType Type) {
}

UWidget* USceneTransitionBackground::GetBackgroundWidget() {
    return NULL;
}

USceneTransitionBackground::USceneTransitionBackground() {
    this->CurrentMode = ETransitionBackGroundType::None;
}

