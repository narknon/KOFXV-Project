#include "OptionItemWidgetA.h"

class UCommon_99_ItemA;

void UOptionItemWidgetA::SetUnaryCursor(FUnaryCursor UnaryCursor) {
}

void UOptionItemWidgetA::InitCursor(UCommon_99_ItemA* DefaultItem) {
}

FUnaryCursor UOptionItemWidgetA::GetUnaryCursor() {
    return FUnaryCursor{};
}

uint8 UOptionItemWidgetA::GetCursorIndex() const {
    return 0;
}

UOptionItemWidgetA::UOptionItemWidgetA() {
    this->LastCursorItem = NULL;
    this->LastCursorItemIndex = 0;
}

