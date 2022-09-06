#include "CharacterSelect_Panels.h"

class UCharacterSelect_Item;

void UCharacterSelect_Panels::SetItemPerRowArraySize() {
}

void UCharacterSelect_Panels::ResetParameter(EPlayerID PlayerID) {
}

void UCharacterSelect_Panels::RefreshItem() {
}

void UCharacterSelect_Panels::RandomTeam(int32 PlayerID) {
}

void UCharacterSelect_Panels::RandomCharacter(int32 PlayerID) {
}

bool UCharacterSelect_Panels::IsUnavailableIndex(int32 PlayerID, int32 ArrayIndex) {
    return false;
}

bool UCharacterSelect_Panels::IsTeamUp(int32 PlayerID) {
    return false;
}

void UCharacterSelect_Panels::InitiliazeItems() {
}

void UCharacterSelect_Panels::InitializeAllPanelItem() {
}

FIntPoint UCharacterSelect_Panels::GetPanelsCursor(int32 PlayerID) {
    return FIntPoint{};
}

bool UCharacterSelect_Panels::GenerateItem() {
    return false;
}

void UCharacterSelect_Panels::GeneratedItem_Implementation(int32 Index, UCharacterSelect_Item* Item) {
}

void UCharacterSelect_Panels::ForceSetCursorValue(FIntPoint& In, FIntPoint Point) {
}

void UCharacterSelect_Panels::EmplaceRandomItem_Implementation() {
}

int32 UCharacterSelect_Panels::CalculatorMaxColumns() {
    return 0;
}

int32 UCharacterSelect_Panels::ArrayIndexByCursor(const FIntPoint InCursor) const {
    return 0;
}

UCharacterSelect_Panels::UCharacterSelect_Panels() {
    this->CharacterSelect_UniformGrid = NULL;
    this->Team_Random_WBP_92_01_panel = NULL;
    this->Character_Random_WBP_92_01_panel_random = NULL;
    this->PanelItemTextureListNormal = NULL;
    this->PanelItemTextureListSelect = NULL;
    this->ItemNumber = 0;
    this->LeftSideDefaultCharacter = ECharacterID::SHU;
    this->RightSideDefaultCharacter = ECharacterID::ISR;
    this->MaxColumns = 0;
    this->MaxRows = 0;
    this->GenerateItemClass = NULL;
    this->TeamRandomItemIndex = 0;
    this->CharacterRandomItemIndex = 0;
}

