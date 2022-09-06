#include "ResultPanelActor.h"
#include "Components/WidgetComponent.h"

AResultPanelActor::AResultPanelActor() {
    this->ResultBackHUD = CreateDefaultSubobject<UWidgetComponent>(TEXT("BackHUD"));
}

