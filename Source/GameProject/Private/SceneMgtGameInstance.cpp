#include "SceneMgtGameInstance.h"

class UMainViewportWidget;

void USceneMgtGameInstance::SetUiTransitionForce(ESceneName Destination, bool f_nowait) {
}

void USceneMgtGameInstance::SetTravelSceneIsIndicatorOnly(bool bIndicator) {
}

void USceneMgtGameInstance::SetTravelSceneIsFade(bool bFade) {
}

void USceneMgtGameInstance::SetTransition(ESceneName Destination, const FString& TravelURL) {
}

void USceneMgtGameInstance::SetReturnToRoomFlag(const bool& InFlag) {
}

void USceneMgtGameInstance::SetRestartLevel(bool bNeedRestart) {
}

void USceneMgtGameInstance::SetMainViewportWidget(UMainViewportWidget* MainViewportWidget) {
}

void USceneMgtGameInstance::SetJoinInvitedRoomMatchFlag(const bool& InFlag) {
}

void USceneMgtGameInstance::SetInvitedRoomInfo(const FRoomInfo& InRoomInfo) {
}

void USceneMgtGameInstance::SetDuringSceneTransition(bool bDuring) {
}

void USceneMgtGameInstance::RequestCloseWindowInvite() {
}

void USceneMgtGameInstance::OutPauseMenu(EOutPauseMenuWindowType Type) {
}

void USceneMgtGameInstance::OpenPauseMenu(EPauseMenu _id, int32 useid) {
}

void USceneMgtGameInstance::OnDisconnectedFromServerDispatcher(bool IsDisconnected) {
}

void USceneMgtGameInstance::LoadTitleSaveData() {
}

void USceneMgtGameInstance::KillFade() {
}

bool USceneMgtGameInstance::IsVersusScene() const {
    return false;
}

bool USceneMgtGameInstance::IsTravelSceneIsIndicatorOnly() const {
    return false;
}

bool USceneMgtGameInstance::IsTravelSceneIsFade() const {
    return false;
}

bool USceneMgtGameInstance::IsTravelBeginClean() {
    return false;
}

bool USceneMgtGameInstance::IsTransition() const {
    return false;
}

bool USceneMgtGameInstance::IsToBeCleanScene(ESceneName Scene) {
    return false;
}

bool USceneMgtGameInstance::IsSceneTravelEffectIn() const {
    return false;
}

bool USceneMgtGameInstance::IsSceneTravelEffect() const {
    return false;
}

bool USceneMgtGameInstance::IsReturnToRoom() {
    return false;
}

bool USceneMgtGameInstance::IsOpenPauseMenu() {
    return false;
}

bool USceneMgtGameInstance::IsLoadingScene() const {
    return false;
}

bool USceneMgtGameInstance::IsJoinInvitedRoomMatch() {
    return false;
}

bool USceneMgtGameInstance::IsInviteInitalized() {
    return false;
}

bool USceneMgtGameInstance::IsFade() {
    return false;
}

bool USceneMgtGameInstance::IsDuringSceneTransition() const {
    return false;
}

bool USceneMgtGameInstance::IsBattleScene() {
    return false;
}

bool USceneMgtGameInstance::IsBattleLoading() const {
    return false;
}

void USceneMgtGameInstance::InviteInitalize() {
}

void USceneMgtGameInstance::InviteDeinitalize() {
}

void USceneMgtGameInstance::InviteAccepted(const FRoomInfo& RoomInfo) {
}

void USceneMgtGameInstance::InitPauseMenu(USettingLayoutWidgetInitBattleSettingType Type) {
}

void USceneMgtGameInstance::InitFadeOut(float FadeFrame, bool White) {
}

void USceneMgtGameInstance::InitFadeIn(float FadeFrame, bool White) {
}

ESceneName USceneMgtGameInstance::GetPreScene() const {
    return ESceneName::SN_Title;
}

UMainViewportWidget* USceneMgtGameInstance::GetMainViewportWidget() {
    return NULL;
}

FRoomInfo USceneMgtGameInstance::GetInvitedRoomInfo() {
    return FRoomInfo{};
}

ESceneName USceneMgtGameInstance::GetCurrentScene() const {
    return ESceneName::SN_Title;
}

void USceneMgtGameInstance::GetBookingScene(ESceneName& Scene) {
}

void USceneMgtGameInstance::DoFade() {
}

void USceneMgtGameInstance::CreatePauseMenu() {
}

void USceneMgtGameInstance::ClosePauseMenu() {
}

void USceneMgtGameInstance::CheckOnlineCompletedInInvitingDispatcher(ECheckOnlineResult InCheckOnlineResult, const FRoomInfo& InRoomInfo) {
}

void USceneMgtGameInstance::BeforeCleanLevel() {
}

void USceneMgtGameInstance::AfterCleanLevel() {
}

USceneMgtGameInstance::USceneMgtGameInstance() {
    this->bWhiteFading = false;
    this->bFadeOut = false;
    this->Indicator = NULL;
    this->FadeWidget = NULL;
    this->OnlineWaitingWidget = NULL;
    this->BattleSettingWidget = NULL;
    this->PauseMenuWidget = NULL;
    this->ButtonConfigWidget = NULL;
    this->CommandList_Layout = NULL;
    this->SystemWindowWidget = NULL;
    this->BattleDataLayoutWidget = NULL;
    this->GuideHUDWidget = NULL;
    this->KeyRecordingWidget = NULL;
    this->EndMenuWidget = NULL;
    this->ComboMissionWidget = NULL;
    this->Replay_Layout = NULL;
    this->ProfileWidget = NULL;
    this->MessageLayout = NULL;
    this->RoomMatchSpectatorLayout = NULL;
    this->RoomWindow = NULL;
    this->m_MainViewportWidget = NULL;
    this->ResultWidget = NULL;
}

