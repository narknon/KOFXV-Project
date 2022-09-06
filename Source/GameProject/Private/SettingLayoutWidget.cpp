#include "SettingLayoutWidget.h"


void USettingLayoutWidget::OpenSystemWindow(bool isFromWaitSetting, int32 PlayerID, EUiOperation Operation) {
}

void USettingLayoutWidget::OpenSelector() {
}

void USettingLayoutWidget::CloseSystemWindow(int32 PlayerID, EUiOperation Operation, bool isSave, bool isFromWaitSetting) {
}

void USettingLayoutWidget::ChangeNotActiveWindowSetting(int32 PlayerID, EUiOperation Operation, bool is_close_se) {
}

void USettingLayoutWidget::ChangeNotActiveWindowCommandList(int32 PlayerID, EUiOperation Operation) {
}

void USettingLayoutWidget::ChangeNotActiveWindowButtonConfig(int32 PlayerID, EUiOperation Operation) {
}

void USettingLayoutWidget::ChangeActiveWindowWaitSetting() {
}

USettingLayoutWidget::USettingLayoutWidget() {
    this->WBP_95_setting = NULL;
    this->WBP_95_01_list_stage = NULL;
    this->WBP_95_01_TitlesList = NULL;
    this->WBP_95_01_list_jacket = NULL;
    this->WBP_95_01_list_sound = NULL;
    this->WBP_95_01_list_chara = NULL;
    this->WBP_95_01_selector = NULL;
    this->WBP_92_01_costume_customize = NULL;
    this->WidgetSwitcher_type = NULL;
}

