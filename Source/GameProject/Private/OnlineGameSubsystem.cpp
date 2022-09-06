#include "OnlineGameSubsystem.h"

void UOnlineGameSubsystem::StartMatchmaking(const FMatchmakingSettings& MatchmakingSettings, FOnMatchmakingCompletedDispatcher OnCompleted) {
}

void UOnlineGameSubsystem::StageSelect(EStageID StageID) {
}

void UOnlineGameSubsystem::SitDownWaitingSeatRequest() {
}

void UOnlineGameSubsystem::SitDownBattleSeatRequest(int32 SeatIndex) {
}

bool UOnlineGameSubsystem::ShowProfileUI(const FString& AccoutId) {
    return false;
}

void UOnlineGameSubsystem::ShowInviteUI() {
}

void UOnlineGameSubsystem::SendStageSelectingCursor(EStageID StageID) {
}

void UOnlineGameSubsystem::RoomMatchWinCountComplete() {
}

void UOnlineGameSubsystem::OrderSelect(int32 CharacterIndex, int32 OrderCountID) {
}

void UOnlineGameSubsystem::OpenResultMenu(EOnlineResultMenuItemType DefaultCursorPosition) {
}

void UOnlineGameSubsystem::OnLoginCompletedInReceiveInviteProcess(ELoginResult Result) {
}

void UOnlineGameSubsystem::OnCheckOnlineCompletedInReceiveInviteProcess(ECheckOnlineResult Result) {
}

void UOnlineGameSubsystem::MoveResultMenuCursor(EOnlineResultMenuItemType NextPosition) {
}

void UOnlineGameSubsystem::MatchingAccept(bool bAccept, FOnMatchingAcceptedDispather OnEveryoneCompleted, bool bPenalty) {
}

void UOnlineGameSubsystem::Login(const int32 ControllerIndex, FOnLoginCompletedDispatcher OnCompleted) {
}

void UOnlineGameSubsystem::LeaveSeatRequest() {
}

void UOnlineGameSubsystem::LeaveRoom() {
}

bool UOnlineGameSubsystem::IsSpectatorLocalPlayer() const {
    return false;
}

bool UOnlineGameSubsystem::IsPassedLongTimeSinceStartMatchmaking() const {
    return false;
}

bool UOnlineGameSubsystem::IsOperationCharacter(EPlayerID PlayerID, int32 CharacterIndex) const {
    return false;
}

bool UOnlineGameSubsystem::IsInRoom() const {
    return false;
}

bool UOnlineGameSubsystem::IsHost() const {
    return false;
}

bool UOnlineGameSubsystem::IsDuringMatchmaking() const {
    return false;
}

bool UOnlineGameSubsystem::IsBattleMasterLocalPlayer() const {
    return false;
}

EPlayerID UOnlineGameSubsystem::GetOpponentPlayerID() const {
    return EPlayerID::Player1;
}

EPlayerID UOnlineGameSubsystem::GetLocalPlayerID() const {
    return EPlayerID::Player1;
}

EOnlineGameMode UOnlineGameSubsystem::GetCurrentOnlineGameMode() const {
    return EOnlineGameMode::RankMatch;
}

FDateTime UOnlineGameSubsystem::GetCurrentBattleStartTime() const {
    return FDateTime{};
}

EStageID UOnlineGameSubsystem::GetAlreadySelectedStage() const {
    return EStageID::TRA_ST;
}

void UOnlineGameSubsystem::DecideResultMenuCursor() {
}

void UOnlineGameSubsystem::CheckOnline(FOnCheckOnlineCompletedDispatcher OnCompleted) {
}

void UOnlineGameSubsystem::CheckNetworkAvailability(FOnCheckOnlineCompletedDispatcher OnCompleted) {
}

void UOnlineGameSubsystem::ChangeResultDisplayState(EOnlineResultDisplayState NextState) {
}

void UOnlineGameSubsystem::CancelResultMenuCursor() {
}

void UOnlineGameSubsystem::CancelOrderSelect() {
}

void UOnlineGameSubsystem::CancelMatchmaking() {
}

void UOnlineGameSubsystem::CancelJoinRoom() {
}

void UOnlineGameSubsystem::CancelFindRooms() {
}

void UOnlineGameSubsystem::CancelCreateRoom() {
}

void UOnlineGameSubsystem::CancelCharacterSelect(EPlayerID PlayerID) {
}

void UOnlineGameSubsystem::BreakStartRequest() {
}

void UOnlineGameSubsystem::BreakEndRequest() {
}

void UOnlineGameSubsystem::BattleSeatCountIsEnd() {
}

void UOnlineGameSubsystem::BattleReady() {
}

void UOnlineGameSubsystem::BackToRoom() {
}

UOnlineGameSubsystem::UOnlineGameSubsystem() {
}

