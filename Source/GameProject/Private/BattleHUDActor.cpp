#include "BattleHUDActor.h"
#include "Components/WidgetComponent.h"

void ABattleHUDActor::CreateFrontHUDToViewport() {
}

ABattleHUDActor::ABattleHUDActor() {
    this->BackHUD = CreateDefaultSubobject<UWidgetComponent>(TEXT("BackHUD"));
    this->FrontHUDWidget = NULL;
    this->FrontHUDWidgetClass = NULL;
}

