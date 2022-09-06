#include "AvatarWidget.h"

class UTexture2D;

void UAvatarWidget::TryGetAvatarByPlayer(EPlayerID PlayerID) {
}

void UAvatarWidget::TryGetAvatarByOrderID(EPlayerID PlayerID, int32 OrderID) {
}

void UAvatarWidget::TryGetAvatarByCharacterIndex(EPlayerID PlayerID, int32 CharacterIndex) {
}

void UAvatarWidget::SwitchAvatarType(const EAvatarWidgetType& InAvatarWidgetType) {
}

void UAvatarWidget::SetPlatformAvatarImage(UTexture2D* Texture) {
}

UAvatarWidget::UAvatarWidget() {
    this->WidgetSwitcher_type = NULL;
    this->avatar_Indicator = NULL;
    this->avatar_none = NULL;
    this->avatar_platform = NULL;
    this->WidgetSwitcher_edge = NULL;
}

