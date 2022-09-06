#include "CasualmatchTestWidget.h"

void UCasualmatchTestWidget::RankmatchAccept(bool f_accept) {
}

void UCasualmatchTestWidget::MatchingCancel() {
}

void UCasualmatchTestWidget::LeaveRoom() {
}

void UCasualmatchTestWidget::FixSelectCharacter(ECharacterID charcter1, ECharaColorID color1, ECharacterID charcter2, ECharaColorID color2, ECharacterID charcter3, ECharaColorID color3) {
}

UCasualmatchTestWidget::UCasualmatchTestWidget() {
    this->kokuseki_Opponent = 0;
    this->CharacterID_Player1 = ECharacterID::NONE;
    this->CharaColorID_Player1 = ECharaColorID::NONE;
    this->kokuseki_Player1 = 0;
    this->CharacterID_Player2 = ECharacterID::NONE;
    this->CharaColorID_Player2 = ECharaColorID::NONE;
    this->kokuseki_Player2 = 0;
}

