#include "CharacterSelect_Layout.h"

class USettingCharaListWidget;
class UBaseWidget;
class UCostume_Customize;
class UHandicap;
class UCharacterSelect_Player;
class UEntry_PlayerList_CharacterSelect;
class UCharacterSelect_Chara;

void UCharacterSelect_Layout::UnloadTextureAssets() {
}

void UCharacterSelect_Layout::TeamUp(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID) {
}

void UCharacterSelect_Layout::TeamRandomConfirm(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID) {
}

void UCharacterSelect_Layout::SubMenuOpen(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::SubMenuClose(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::SubMenuBackToMainMenu(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::SingleBattleStageOut() {
}

void UCharacterSelect_Layout::SingleBattleStageInit() {
}

void UCharacterSelect_Layout::SingleBattleStageIn() {
}

USettingCharaListWidget* UCharacterSelect_Layout::SelectRegistrationList(EPlayerID PlayerID) {
    return NULL;
}

UBaseWidget* UCharacterSelect_Layout::SelectProgressInfo(EPlayerID PlayerID) {
    return NULL;
}

UCharacterSelect_Player* UCharacterSelect_Layout::SelectPlayerWidget(EPlayerID PlayerID) {
    return NULL;
}

UEntry_PlayerList_CharacterSelect* UCharacterSelect_Layout::SelectPlayerlist(EPlayerID PlayerID) {
    return NULL;
}

void UCharacterSelect_Layout::SelectingCharacter(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID) {
}

UHandicap* UCharacterSelect_Layout::SelectHandicapWidget(EPlayerID PlayerID) {
    return NULL;
}

UCostume_Customize* UCharacterSelect_Layout::SelectCustomizeWidget(EPlayerID PlayerID) {
    return NULL;
}

UCharacterSelect_Chara* UCharacterSelect_Layout::SelectCharaWidget(EPlayerID PlayerID) {
    return NULL;
}

void UCharacterSelect_Layout::PlayerOptionPressed(int32 PlayerID, EUiOperation Operation) {
}

void UCharacterSelect_Layout::PlayerListOpen(int32 PlayerID, EUiOperation Operation) {
}

void UCharacterSelect_Layout::PlayerListConfirm(int32 PlayerID, EUiOperation Operation) {
}

void UCharacterSelect_Layout::PlayerListCancel(int32 PlayerID, EUiOperation Operation) {
}

void UCharacterSelect_Layout::PanelsCharacterConfirm(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID) {
}

void UCharacterSelect_Layout::PanelsCharacterCancel(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID) {
}

void UCharacterSelect_Layout::Panels_Next_Implementation(int32 PlayerID, EUiOperation Operation) {
}

bool UCharacterSelect_Layout::Panels_Bind() {
    return false;
}

void UCharacterSelect_Layout::Panels_Back_Implementation(int32 PlayerID, EUiOperation Operation) {
}

void UCharacterSelect_Layout::OpenSystemWindwosTitle(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::OpenRegistrationList(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::OpenButtonConfig(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::OnTimerCountFinish() {
}

void UCharacterSelect_Layout::OnlineCharacterConfirm(EPlayerID PlayerID, int32 CharacterIndex, ECharacterID CharacterID, ECharaColorID CharaColorID, int32 CharaCostumeID) {
}

void UCharacterSelect_Layout::OnlineCharacterCancel(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::LoadTextureAssets() {
}

void UCharacterSelect_Layout::LoadNextTextureAsset() {
}

void UCharacterSelect_Layout::InitTimer() {
}

void UCharacterSelect_Layout::HandicapOpen(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::HandicapConfirm(int32 PlayerID, EUiOperation Operation) {
}

void UCharacterSelect_Layout::HandicapCancel(int32 PlayerID, EUiOperation Operation) {
}

void UCharacterSelect_Layout::CustomizeSync(EPlayerID PlayerID, ECostumeType CostumeType, ECharaColorID CharaColorID) {
}

void UCharacterSelect_Layout::CustomizeConfirm(EPlayerID PlayerID, ECostumeType CostumeType, ECharaColorID CharaColorID) {
}

void UCharacterSelect_Layout::CustomizeCancel(EPlayerID PlayerID, ECostumeType CostumeType, ECharaColorID CharaColorID) {
}

void UCharacterSelect_Layout::CpuLevelSetup(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::ConnectOnlineGameSubsystem() {
}

void UCharacterSelect_Layout::ConfirmRegistrationList(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::CloseSystemWindwosTitle() {
}

void UCharacterSelect_Layout::CloseRegistrationList(EPlayerID PlayerID) {
}

void UCharacterSelect_Layout::CloseButtonConfig(int32 PlayerID, EUiOperation Operation) {
}

void UCharacterSelect_Layout::CharacterSelectInitializeAnim() {
}

void UCharacterSelect_Layout::CharacterRandomConfirm(EPlayerID PlayerID, int32 SelectStep, ECharacterID CharacterID) {
}

void UCharacterSelect_Layout::CharacterConfirm(EPlayerID PlayerID) {
}

UCharacterSelect_Layout::UCharacterSelect_Layout() {
    this->LoadingAssetIndex = 0;
    this->SystemWindowBackTitle = NULL;
    this->SystemWindowBackRankMatch = NULL;
    this->SystemWindowBackCasualMatch = NULL;
    this->Panels = NULL;
    this->Player_1 = NULL;
    this->Player_2 = NULL;
    this->chara_L = NULL;
    this->chara_R = NULL;
    this->costume_customize_L = NULL;
    this->costume_customize_R = NULL;
    this->Handicap_L = NULL;
    this->Handicap_R = NULL;
    this->PlayerList_L = NULL;
    this->PlayerList_R = NULL;
    this->progressInfo_L = NULL;
    this->progressInfo_R = NULL;
    this->progressInfo_C = NULL;
    this->Guide = NULL;
    this->RegistrationList_L = NULL;
    this->RegistrationList_R = NULL;
    this->SubMenu = NULL;
    this->SelectTimer = NULL;
    this->CpuLevel = NULL;
    this->CharacterIllustrationList_L = NULL;
    this->CharacterIllustrationList_R = NULL;
    this->TimeCount = 60;
    this->PartVsTimeCount = 30;
    this->DraftVsTimeCount.AddDefaulted(7);
    this->bForArtDebug = false;
}

