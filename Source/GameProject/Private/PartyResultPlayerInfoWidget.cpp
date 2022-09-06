#include "PartyResultPlayerInfoWidget.h"

class UTexture2D;

void UPartyResultPlayerInfoWidget::SetCharaTexture(UTexture2D* Texture) {
}

UPartyResultPlayerInfoWidget::UPartyResultPlayerInfoWidget() {
    this->Chara = NULL;
    this->BP_TextBlock_order = NULL;
    this->WBP_99_icon_quitter = NULL;
    this->BP_TextBlock_A_C_160 = NULL;
    this->WBP_93_playerInfo = NULL;
    this->PartyCharaTextureDataTable_L = NULL;
    this->PartyCharaTextureDataTable_R = NULL;
    this->WBP_icon_lineSpeed = NULL;
    this->BP_TextBlock_ping = NULL;
    this->unit_ms = NULL;
    this->LineInfoOverlay = NULL;
}

