#include "OperationalWidget_SinglerActionScene.h"

class UOperationalWidget;

void UOperationalWidget_SinglerActionScene::setCurrentWidget(UOperationalWidget* in_target) {
}

UOperationalWidget* UOperationalWidget_SinglerActionScene::getCurrentWidget() {
    return NULL;
}

UOperationalWidget_SinglerActionScene::UOperationalWidget_SinglerActionScene() {
    this->currentWidget = NULL;
}

