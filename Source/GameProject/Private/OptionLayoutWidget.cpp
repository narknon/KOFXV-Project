#include "OptionLayoutWidget.h"

class UEntry_PlayerList;
class UDocumentWidget;

UEntry_PlayerList* UOptionLayoutWidget::GetPlayerList() {
    return NULL;
}

UDocumentWidget* UOptionLayoutWidget::GetDocument() {
    return NULL;
}

UOptionLayoutWidget::UOptionLayoutWidget() {
    this->WBP_00_02_Document = NULL;
    this->WBP_10_PlayerList = NULL;
    this->WBP_10_Menu_system = NULL;
    this->WBP_10_Menu_game = NULL;
    this->WBP_10_Menu_sound = NULL;
    this->WBP_10_Menu_display = NULL;
    this->WBP_10_Menu_graphic = NULL;
    this->WBP_99_ButtonConfig_Layout = NULL;
}

