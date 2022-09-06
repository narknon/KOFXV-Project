#include "OrderSelectItem.h"

void UOrderSelectItem::UpdateButtonImage() {
}

void UOrderSelectItem::AllConfirmButtonOut() {
}

UOrderSelectItem::UOrderSelectItem() {
    this->turn_WidgetSwitcher_btn = NULL;
    this->btn_000 = NULL;
    this->btn_001 = NULL;
    this->btn_002 = NULL;
    this->btn_003 = NULL;
    this->ButtonArray.AddDefaulted(4);
    this->PS4Button.AddDefaulted(4);
    this->XSXButton.AddDefaulted(4);
    this->StadiaButton.AddDefaulted(4);
    this->EpicButton.AddDefaulted(4);
}

