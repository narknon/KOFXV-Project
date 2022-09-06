#include "CharacterSelect_Item.h"

class UTexture2D;
class UImage;

void UCharacterSelect_Item::UpdateItemFlag(ECharcterItemFlag _ItemFlags) {
}

void UCharacterSelect_Item::UpdateItemCharacter(ECharacterID _CharacterID) {
}



void UCharacterSelect_Item::SetItemState(int32 PlayerID, EOperationalIteamState NewState) {
}

void UCharacterSelect_Item::SetItemData(ECharacterID _CharacterID, ECharcterItemFlag _ItemFlags) {
}

void UCharacterSelect_Item::SetButtonTexture(TSoftObjectPtr<UImage> Image, TSoftObjectPtr<UTexture2D> Texture) {
}

bool UCharacterSelect_Item::IsIconActive() {
    return false;
}

EOperationalIteamState UCharacterSelect_Item::GetItemState(int32 PlayerID) {
    return EOperationalIteamState::OIS_NML;
}

ECharcterItemFlag UCharacterSelect_Item::GetItemFlag() const {
    return ECharcterItemFlag::None;
}

ECharacterID UCharacterSelect_Item::GetItemCharacterID() const {
    return ECharacterID::NONE;
}

UCharacterSelect_Item::UCharacterSelect_Item() {
    this->sel_L = NULL;
    this->sel_R = NULL;
    this->sel_both_L = NULL;
    this->sel_both_R = NULL;
    this->seled_L = NULL;
    this->seled_R = NULL;
}

