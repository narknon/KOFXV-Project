#include "DebugMenuInfoSaveData.h"

UDebugMenuInfoSaveData::UDebugMenuInfoSaveData() {
    this->save_slot_name_ = TEXT("debug_menu_info");
    this->user_index_ = 0;
    this->DebugSaveCameraInfo.AddDefaulted(10);
    this->bOpenDebugMenuWithTouchPad = false;
}

