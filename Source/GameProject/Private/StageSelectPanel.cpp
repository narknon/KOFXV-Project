#include "StageSelectPanel.h"

void UStageSelectPanel::SetStageID(EStageID ID) {
}

void UStageSelectPanel::SetNewLabelVisibility(bool bVisable) {
}

EStageID UStageSelectPanel::GetStageID() const {
    return EStageID::TRA_ST;
}

UStageSelectPanel::UStageSelectPanel() {
    this->WBP_99_tag_A = NULL;
    this->StageID = EStageID::NONE;
}

