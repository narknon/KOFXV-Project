#include "Costume_Customize_Item.h"


void UCostume_Customize_Item::SetState(bool selected) {
}

void UCostume_Customize_Item::SetCursorState(bool selected) {
}

UCostume_Customize_Item::UCostume_Customize_Item() {
    this->WidgetSwitcher_item = NULL;
    this->BP_TextBlock_customize_name = NULL;
    this->HorizontalBox_pageNavi = NULL;
    this->color_base = NULL;
    this->bSelected = false;
}

