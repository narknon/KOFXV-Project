#include "Entry_PlayerList_Item.h"

class UEntry_PlayerList;

void UEntry_PlayerList_Item::TextRecive(const FText& Text) {
}

void UEntry_PlayerList_Item::TextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UEntry_PlayerList_Item::TextChanged(const FText& Text) {
}

void UEntry_PlayerList_Item::SetSideCursorVisiable(bool bVisiable, bool bInherit) {
}

void UEntry_PlayerList_Item::SetSelectState(ESelectItemState State) {
}

void UEntry_PlayerList_Item::SetOwnerWidget(TSoftObjectPtr<UEntry_PlayerList> Owner) {
}

void UEntry_PlayerList_Item::SetEditState(bool IsEditing) {
}

FText UEntry_PlayerList_Item::GetText() {
    return FText::GetEmpty();
}

void UEntry_PlayerList_Item::ClearText() {
}

UEntry_PlayerList_Item::UEntry_PlayerList_Item() {
    this->TextBlock_Number = NULL;
    this->WidgetSwitcher_player = NULL;
    this->TextBase = NULL;
    this->Text_PlayerName = NULL;
    this->EditableText_PlayerName = NULL;
}

