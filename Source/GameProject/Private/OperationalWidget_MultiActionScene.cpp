#include "OperationalWidget_MultiActionScene.h"

class UOperationalWidget;

bool UOperationalWidget_MultiActionScene::setCurrentWidget(int32 PlayerID, UOperationalWidget* in_target) {
    return false;
}

UOperationalWidget* UOperationalWidget_MultiActionScene::getCurrentWidget(int32 PlayerID) {
    return NULL;
}

int32 UOperationalWidget_MultiActionScene::ConvertCursorPlayer(int32 PlayerID) {
    return 0;
}

UOperationalWidget_MultiActionScene::UOperationalWidget_MultiActionScene() {
    this->RealInputedPlayerID = 0;
}

