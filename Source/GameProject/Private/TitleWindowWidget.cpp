#include "TitleWindowWidget.h"



void UTitleWindowWidget::ChangeButtonGuide(EButtonType NewButtonL, EButtonType NewButtonR) {
}

UTitleWindowWidget::UTitleWindowWidget() {
    this->BP_TextBlock_title = NULL;
    this->Overlay_page = NULL;
    this->btn_L = NULL;
    this->btn_R = NULL;
    this->arrow_L = NULL;
    this->arrow_R = NULL;
    this->buttonL = EButtonType::L1;
    this->buttonR = EButtonType::R1;
}

