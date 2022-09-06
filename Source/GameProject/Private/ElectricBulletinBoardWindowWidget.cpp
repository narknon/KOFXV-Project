#include "ElectricBulletinBoardWindowWidget.h"

void UElectricBulletinBoardWindowWidget::TextCommittedComplete() {
}

void UElectricBulletinBoardWindowWidget::TextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UElectricBulletinBoardWindowWidget::TextChanged(const FText& Text) {
}


void UElectricBulletinBoardWindowWidget::ClearText() {
}

UElectricBulletinBoardWindowWidget::UElectricBulletinBoardWindowWidget() {
    this->BP_TextBlock_title = NULL;
    this->BP_TextBlock_A_telopstage = NULL;
    this->WBP_95_00_telopStage_0 = NULL;
    this->WBP_95_00_telopStage_1 = NULL;
    this->WBP_99_itemA_type_0 = NULL;
    this->EditableTextBox_input = NULL;
}

