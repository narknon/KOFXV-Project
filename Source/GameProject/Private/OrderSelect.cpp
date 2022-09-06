#include "OrderSelect.h"

void UOrderSelect::UpdateSideProgressInfo_Implementation(int32 PlayerID, int32 Index) {
}

bool UOrderSelect::SetOrderIndex(int32 PlayerID, int32 OrderIndex) {
    return false;
}

void UOrderSelect::SelectInOrder(int32 PlayerID) {
}

bool UOrderSelect::RandomOrder_Implementation(int32 PlayerID) {
    return false;
}

void UOrderSelect::OnlineSelectedOrder(EPlayerID PlayerID, int32 CharacterIndex, int32 OrderCountID) {
}

void UOrderSelect::OnlineCancelOrder(EPlayerID PlayerID) {
}

int32 UOrderSelect::GetOrderIndexCount(int32 PlayerID) {
    return 0;
}

void UOrderSelect::ConnectOnlineGameSubsystem() {
}

void UOrderSelect::ConfirmAnimation_SelectOrder_Implementation(int32 PlayerID, int32 Index) {
}

void UOrderSelect::ConfirmAnimation_Button_Implementation(int32 PlayerID, int32 Index) {
}

void UOrderSelect::CancelAnimation_SelectOrder_Implementation(int32 PlayerID, int32 Index) {
}

void UOrderSelect::CancelAnimation_Button_Implementation(int32 PlayerID, int32 Index) {
}

void UOrderSelect::AllConfirmCheck(int32 PlayerID) {
}

UOrderSelect::UOrderSelect() {
    this->GuideItemArray = NULL;
    this->SelectTimer = NULL;
    this->SystemWindowBackTitle = NULL;
}

