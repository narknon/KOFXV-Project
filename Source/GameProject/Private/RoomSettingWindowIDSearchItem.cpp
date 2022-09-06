#include "RoomSettingWindowIDSearchItem.h"

void URoomSettingWindowIDSearchItem::EditableTextChangedEvent(const FText& InText, TEnumAsByte<ETextCommit::Type> InCommitMethod) {
}

void URoomSettingWindowIDSearchItem::ChangedText(const FText& InText) {
}

URoomSettingWindowIDSearchItem::URoomSettingWindowIDSearchItem() {
    this->WidgetSwitcher_item = NULL;
    this->RoomIDText = NULL;
}

