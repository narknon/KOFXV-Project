#include "MainViewportWidgetSpawner.h"

void AMainViewportWidgetSpawner::CreatedMainWidget() {
}

AMainViewportWidgetSpawner::AMainViewportWidgetSpawner() {
    this->MainViewportWidgetClass = NULL;
    this->MainViewportWidget = NULL;
    this->TravelScene = ESceneName::SN_Title;
}

