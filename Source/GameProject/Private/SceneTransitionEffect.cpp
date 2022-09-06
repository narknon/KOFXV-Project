#include "SceneTransitionEffect.h"

class UTexture2D;

void USceneTransitionEffect::SetBackgroundType(ETransitionBackGroundType Type) {
}

UTexture2D* USceneTransitionEffect::GetModeTexture(ETransitionBackGroundType Type) {
    return NULL;
}

USceneTransitionEffect::USceneTransitionEffect() {
    this->CurrentMode = ETransitionBackGroundType::Title;
}

