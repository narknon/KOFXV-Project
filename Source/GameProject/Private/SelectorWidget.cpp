#include "SelectorWidget.h"


void USelectorWidget::SetTitleText(const FText& Text) {
}

void USelectorWidget::InitiliazeItems() {
}

USelectorWidget::USelectorWidget() {
    this->BP_ScrollBox_A = NULL;
    this->BP_TextBlock_charaname = NULL;
    this->Overlay_page = NULL;
    this->BP_TextBlock_title = NULL;
    this->Chara = NULL;
    this->WidgetSwitcher_player = NULL;
    this->WidgetSwitcher_type = NULL;
    this->WBP_ANIM_wdw_1164 = NULL;
    this->WBP_95_00_register_team = NULL;
    this->WBP_95_00_register_chara = NULL;
    this->CurrentPanel = NULL;
    this->LastSelectedPanel = NULL;
    this->PanelItemDataTable = NULL;
    this->PanelItemOptionTable = NULL;
    this->NowHeight = 0;
    this->NowWidth = 0;
    this->LeftShift = -65.00f;
    this->LineClass = NULL;
    this->LineOptionClass = NULL;
}

