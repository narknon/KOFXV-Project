#include "Entry_PlayerList.h"

void UEntry_PlayerList::TriangleButtonPressed() {
}

void UEntry_PlayerList::SaveItemData() {
}

void UEntry_PlayerList::OptionButtonPressed(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_PlayerList::ItemSelect(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_PlayerList::ItemContentClear() {
}

void UEntry_PlayerList::ItemContentAllClear() {
}

void UEntry_PlayerList::ItemConfirm() {
}

void UEntry_PlayerList::ItemCancel(int32 PlayerID, EUiOperation Operation) {
}

void UEntry_PlayerList::GenerateItem() {
}

void UEntry_PlayerList::CloseSystemWindow() {
}

UEntry_PlayerList::UEntry_PlayerList() {
    this->PlayerListBox = NULL;
    this->ItemClass = NULL;
    this->PageItemNum = 1;
    this->bSideCursorVisiable = true;
    this->bAnimateScroll = true;
    this->bPlayerOneOnly = true;
    this->bTextEditing = false;
    this->LastSelectItem = NULL;
}

