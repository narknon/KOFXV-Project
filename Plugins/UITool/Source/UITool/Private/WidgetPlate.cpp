#include "WidgetPlate.h"
#include "WidgetPlateComponent.h"

AWidgetPlate::AWidgetPlate() {
    this->WidgetPlate = CreateDefaultSubobject<UWidgetPlateComponent>(TEXT("WidgetPlateComponent"));
}

