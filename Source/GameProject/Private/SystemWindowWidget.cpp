#include "SystemWindowWidget.h"

class UAkCallbackInfo;

void USystemWindowWidget::SystemWindowDecide(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void USystemWindowWidget::SystemWindowCancel(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}




USystemWindowWidget::USystemWindowWidget() {
    this->WBP_ConfirmBox = NULL;
    this->GameInstanceGameParameters = NULL;
}

