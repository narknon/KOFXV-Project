#include "SoundCustomiazeItem.h"

FText USoundCustomiazeItem::GetInfoText() {
    return FText::GetEmpty();
}

void USoundCustomiazeItem::CheckBox(const bool Checked) {
}

USoundCustomiazeItem::USoundCustomiazeItem() {
    this->WBP_99_check = NULL;
    this->MusiclistenIcon = NULL;
    this->Icon_music = NULL;
    this->TitleText = NULL;
    this->SoundTitleSizeBox = NULL;
    this->ContentText = NULL;
}

