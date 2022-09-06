#include "Costume_Customize.h"

void UCostume_Customize::UpdateColorTexutre() {
}

void UCostume_Customize::UnloadTextureAssets() {
}

void UCostume_Customize::LoadTextureAssets() {
}

void UCostume_Customize::LoadNextTextureAsset() {
}

int32 UCostume_Customize::ConvertCursorPlayer(int32 PlayerID) {
    return 0;
}

UCostume_Customize::UCostume_Customize() {
    this->CostumeColorTexture = NULL;
    this->WBP_92_01_customize_item_costume = NULL;
    this->WBP_92_01_customize_item_color = NULL;
    this->chara_L = NULL;
    this->chara_C = NULL;
    this->chara_R = NULL;
    this->DefaultItemIndex = 1;
    this->LoadingAssetIndex = 0;
}

