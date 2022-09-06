#include "CharacterSelect_Player.h"

void UCharacterSelect_Player::UnloadTextureAssets() {
}

bool UCharacterSelect_Player::ShouldBePlayOrderInitAnim() {
    return false;
}

void UCharacterSelect_Player::LoadTextureAssets() {
}

void UCharacterSelect_Player::LoadNextTextureAsset() {
}

UCharacterSelect_Player::UCharacterSelect_Player() {
    this->LoadingAssetIndex = 0;
    this->WBP_92_01_player_order_0 = NULL;
    this->WBP_92_01_player_order_1 = NULL;
    this->WBP_92_01_player_order_2 = NULL;
    this->CharacterSelectPlayerSelectList = NULL;
    this->CharacterSelectPlayerSelectedList = NULL;
}

