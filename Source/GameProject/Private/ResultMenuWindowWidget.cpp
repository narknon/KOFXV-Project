#include "ResultMenuWindowWidget.h"

class UAkCallbackInfo;


void UResultMenuWindowWidget::OnStartRematchDispatcher() {
}

void UResultMenuWindowWidget::OnReturnOrderSelectDispatcher() {
}

void UResultMenuWindowWidget::OnReturnMemberSelectDispatcher() {
}

void UResultMenuWindowWidget::OnGoToRoomMatchDispatcher() {
}

void UResultMenuWindowWidget::OnChangedResultStateDispatcher(EPlayerID PlayerID, FOnlineResultState CursorState) {
}

void UResultMenuWindowWidget::OnBattleFinishedDispatcher() {
}

void UResultMenuWindowWidget::DoTransition(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void UResultMenuWindowWidget::CloseProfile(int32 PlayerID, EUiOperation Operation) {
}

void UResultMenuWindowWidget::CloseBattleSetting(int32 PlayerID, EUiOperation Operation) {
}

UResultMenuWindowWidget::UResultMenuWindowWidget() {
    this->WBP_94_num_count = NULL;
    this->WBP_99_wdwA = NULL;
    this->WBP_99_wdwA_92_03 = NULL;
    this->GameInstanceGameParameters = NULL;
}

