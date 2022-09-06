#include "RankmatchTestWidget.h"

void URankmatchTestWidget::RankmatchAccept(bool f_accept) {
}

void URankmatchTestWidget::MatchingCancelRankmatch() {
}

void URankmatchTestWidget::LeaveRoom() {
}

void URankmatchTestWidget::FixSelectCharacter(ECharacterID charcter1, ECharaColorID color1, ECharacterID charcter2, ECharaColorID color2, ECharacterID charcter3, ECharaColorID color3) {
}

URankmatchTestWidget::URankmatchTestWidget() {
    this->kokuseki_Opponent = 0;
    this->CharacterID_Player1 = ECharacterID::NONE;
    this->CharaColorID_Player1 = ECharaColorID::NONE;
    this->kokuseki_Player1 = 0;
    this->CharacterID_Player2 = ECharacterID::NONE;
    this->CharaColorID_Player2 = ECharaColorID::NONE;
    this->kokuseki_Player2 = 0;
}

