#include "GameInstanceGameParameters.h"

class UDataTable;

int32 UGameInstanceGameParameters::VersusMode_GetWinRateFirstdecimal(EPlayerID PlayerID) const {
    return 0;
}

int32 UGameInstanceGameParameters::VersusMode_GetWinRate(EPlayerID PlayerID) const {
    return 0;
}

int32 UGameInstanceGameParameters::VersusMode_GetWinGameCount(EPlayerID PlayerID) const {
    return 0;
}

int32 UGameInstanceGameParameters::VersusMode_GetLoseGameCount(EPlayerID PlayerID) const {
    return 0;
}

int32 UGameInstanceGameParameters::VersusMode_GetKillStreak(EPlayerID PlayerID) const {
    return 0;
}

int32 UGameInstanceGameParameters::VersusMode_GetDrawGameCount(EPlayerID PlayerID) const {
    return 0;
}

void UGameInstanceGameParameters::SetVSBattleWinRule(EGameOptionBattleWinRule BattleWinRule) {
}

void UGameInstanceGameParameters::SetUseChinemaCamera(bool bChi) {
}

void UGameInstanceGameParameters::SetupStoryMode(bool bContinued) {
}

void UGameInstanceGameParameters::SetupDecideRankMatchMode() {
}

void UGameInstanceGameParameters::SetUIParamStageID(EStageID _stage) {
}

void UGameInstanceGameParameters::SetUIParamMemberCount(EPlayerID _playerID, int32 memberCount) {
}

void UGameInstanceGameParameters::SetUIParamHandicapLevel(EPlayerID _playerID, EBattleHandicap _handicap) {
}

void UGameInstanceGameParameters::SetUIParamCharacterID(EPlayerID _playerID, ECharacterID _charaID, int32 _orderID) {
}

void UGameInstanceGameParameters::SetUIParamCharacterCostumeType(EPlayerID _playerID, ECostumeType _costumeType, int32 _orderID) {
}

void UGameInstanceGameParameters::SetUIParamCharaColorID(EPlayerID _playerID, ECharaColorID _colorID, int32 _orderID) {
}

void UGameInstanceGameParameters::SetStoryWinCount(int32 _count) {
}

void UGameInstanceGameParameters::SetStoryScoreTime(int32 scoreTime) {
}

void UGameInstanceGameParameters::SetStoryContinueService(EContinueServiceType InService) {
}

void UGameInstanceGameParameters::SetStoryContinueOrderSelect(bool InIsContinue) {
}

void UGameInstanceGameParameters::SetStoryContinueMemberSelect(bool InIsContinue) {
}

void UGameInstanceGameParameters::SetStoryContinueLBS(bool InIsContinue) {
}

void UGameInstanceGameParameters::SetStoryContinue(bool _isContinue) {
}

void UGameInstanceGameParameters::SetStoryClearCharacter(ECharacterID CharacterID) {
}

void UGameInstanceGameParameters::SetStoryCharaChange(bool _isCharaChange) {
}

void UGameInstanceGameParameters::SetStandByRankSelect(const ERankSelect& Rank) {
}

void UGameInstanceGameParameters::SetStandByRankMatch(const bool& flag) {
}

void UGameInstanceGameParameters::SetStandByOnlineMode(const EOnlineGameMode& Mode) {
}

void UGameInstanceGameParameters::SetStandByInTrainingFlag(const bool& flag) {
}

void UGameInstanceGameParameters::SetStandByCasualMatch(const bool& flag) {
}

void UGameInstanceGameParameters::SetStandByAreaSelect(const EAreaSelect& select) {
}

void UGameInstanceGameParameters::SetStandByAntennaLevel(const EAntennaSelect& Level) {
}

void UGameInstanceGameParameters::SetRequestBGMPlayType(EPlayBGMType bgm_type) {
}

void UGameInstanceGameParameters::SetIsExecutedVSBattleLevel(bool execute_flg) {
}

void UGameInstanceGameParameters::SetGameOptionSoundParam(TArray<int32> optionSoundParam) {
}

void UGameInstanceGameParameters::SetGameOptionBattleWinRule(EGameOptionBattleWinRule BattleWinRule) {
}

void UGameInstanceGameParameters::SetGameOptionBattleTime(EGameOptionBattleTime BattleTime) {
}

void UGameInstanceGameParameters::SetGameOptionAILevel(EGameOptionAILevel aiLevel) {
}

void UGameInstanceGameParameters::SetGameMode(EGameMode _mode) {
}

void UGameInstanceGameParameters::SetFinishStageSelect(bool _finish) {
}

void UGameInstanceGameParameters::SetFinishControllerSelect(bool _finish) {
}

void UGameInstanceGameParameters::SetExecutedMainMenuFadeIn(bool execute_flg) {
}

void UGameInstanceGameParameters::SetExecuteBreathVoice(bool play_flg) {
}

void UGameInstanceGameParameters::SetControllerID(EPlayerID _playerID, EPlayerID _controllerID) {
}

void UGameInstanceGameParameters::SetBattleStartScoreTime(int32 scoreTime) {
}

EPlayerID UGameInstanceGameParameters::SearchPlayerIDByControllerID(EPlayerID _controllerID) {
    return EPlayerID::Player1;
}

void UGameInstanceGameParameters::ResetStoryWinStreakCount() {
}

void UGameInstanceGameParameters::ResetStoryContinueThisBattle() {
}

bool UGameInstanceGameParameters::IsStoryLastBossBattle() const {
    return false;
}

bool UGameInstanceGameParameters::IsStoryContinueOrderSelect() {
    return false;
}

bool UGameInstanceGameParameters::IsStoryContinueMemberSelect() {
    return false;
}

bool UGameInstanceGameParameters::IsStoryContinueLBS() {
    return false;
}

bool UGameInstanceGameParameters::IsStoryContinue() {
    return false;
}

bool UGameInstanceGameParameters::IsStoryCharaChange() {
    return false;
}

bool UGameInstanceGameParameters::IsStoryBossBattle() const {
    return false;
}

bool UGameInstanceGameParameters::IsStandByRankMatch() {
    return false;
}

bool UGameInstanceGameParameters::IsStandByInTraining() const {
    return false;
}

bool UGameInstanceGameParameters::IsStandByCasualMatch() {
    return false;
}

bool UGameInstanceGameParameters::IsRankMatchGameMode() const {
    return false;
}

bool UGameInstanceGameParameters::IsOnlineGameMode() const {
    return false;
}

bool UGameInstanceGameParameters::IsFinishedStageSelect() {
    return false;
}

bool UGameInstanceGameParameters::IsFinishedControllerSelect() {
    return false;
}

bool UGameInstanceGameParameters::IsEnableStage(EStageID stage) {
    return false;
}

bool UGameInstanceGameParameters::IsEnableCharacter(ECharacterID Chara) {
    return false;
}

bool UGameInstanceGameParameters::IsCusualMatchGameMode() const {
    return false;
}

bool UGameInstanceGameParameters::IsChoiceOneCharacterGameMode() {
    return false;
}

void UGameInstanceGameParameters::IncrementCommonBattleTime() {
}

int32 UGameInstanceGameParameters::GetWinCount(EPlayerID PlayerID) {
    return 0;
}

EGameOptionBattleWinRule UGameInstanceGameParameters::GetVSBattleWinRule() const {
    return EGameOptionBattleWinRule::SetCount1;
}

bool UGameInstanceGameParameters::GetUseChinemaCamera() {
    return false;
}

EStageID UGameInstanceGameParameters::GetUIParamStageID() const {
    return EStageID::TRA_ST;
}

int32 UGameInstanceGameParameters::GetUIParamMemberCount(EPlayerID _playerID) const {
    return 0;
}

EBattleHandicap UGameInstanceGameParameters::GetUIParamHandicapLevel(EPlayerID _playerID) const {
    return EBattleHandicap::Level1;
}

ECharacterID UGameInstanceGameParameters::GetUIParamCharacterID(EPlayerID _playerID, int32 _orderID) const {
    return ECharacterID::NONE;
}

ECostumeType UGameInstanceGameParameters::GetUIParamCharacterCostumeType(EPlayerID _playerID, int32 _orderID) const {
    return ECostumeType::Standard;
}

ECharaColorID UGameInstanceGameParameters::GetUIParamCharaColorID(EPlayerID _playerID, int32 _orderID) const {
    return ECharaColorID::NONE;
}

ECharacterID UGameInstanceGameParameters::GetUIParamBaseCharacterID(EPlayerID _playerID, int32 _orderID) const {
    return ECharacterID::NONE;
}

int32 UGameInstanceGameParameters::GetStoryWinStreakCount() {
    return 0;
}

int32 UGameInstanceGameParameters::GetStoryWinCount() const {
    return 0;
}

int32 UGameInstanceGameParameters::GetStoryScoreTime() const {
    return 0;
}

EMovieID UGameInstanceGameParameters::GetStoryMovieID() {
    return EMovieID::NONE;
}

EContinueServiceType UGameInstanceGameParameters::GetStoryContinueService() {
    return EContinueServiceType::NoService;
}

ECharacterID UGameInstanceGameParameters::GetStoryClearCharacter() {
    return ECharacterID::NONE;
}

ERankSelect UGameInstanceGameParameters::GetStandByRankSelect() {
    return ERankSelect::Same;
}

EOnlineGameMode UGameInstanceGameParameters::GetStandByOnlineMode() {
    return EOnlineGameMode::RankMatch;
}

EAreaSelect UGameInstanceGameParameters::GetStandByAreaSelect() {
    return EAreaSelect::Same;
}

EAntennaSelect UGameInstanceGameParameters::GetStandByAntennaLevel() {
    return EAntennaSelect::ALL;
}

EPlayBGMType UGameInstanceGameParameters::GetRequestBGMPlayType() {
    return EPlayBGMType::NORMAL;
}

bool UGameInstanceGameParameters::GetIsExecutedVSBattleLevel() {
    return false;
}

TArray<int32> UGameInstanceGameParameters::GetGameOptionSoundParam() const {
    return TArray<int32>();
}

EGameOptionBattleWinRule UGameInstanceGameParameters::GetGameOptionBattleWinRule() const {
    return EGameOptionBattleWinRule::SetCount1;
}

EGameOptionBattleTime UGameInstanceGameParameters::GetGameOptionBattleTime() const {
    return EGameOptionBattleTime::Count60;
}

EGameOptionAILevel UGameInstanceGameParameters::GetGameOptionAILevel() const {
    return EGameOptionAILevel::VeryEasy;
}

EGameMode UGameInstanceGameParameters::GetGameMode() {
    return EGameMode::GAME_MODE_VERSUS;
}

FFightingGameData UGameInstanceGameParameters::GetFightingGameData() {
    return FFightingGameData{};
}

bool UGameInstanceGameParameters::GetExecutedMainMenuFadeIn() {
    return false;
}

bool UGameInstanceGameParameters::GetExecuteBreathVoice() {
    return false;
}

EDevice UGameInstanceGameParameters::GetDeviceType() {
    return EDevice::DeviceNotSet;
}

EPlayerID UGameInstanceGameParameters::GetControllerID(EPlayerID _playerID) {
    return EPlayerID::Player1;
}

int32 UGameInstanceGameParameters::GetCommonBattleTime() const {
    return 0;
}

UDataTable* UGameInstanceGameParameters::GetCharacterListTable() const {
    return NULL;
}

UDataTable* UGameInstanceGameParameters::GetCharacterColorTable() const {
    return NULL;
}

int32 UGameInstanceGameParameters::GetBattleStartScoreTime() const {
    return 0;
}

int32 UGameInstanceGameParameters::GetBattleRemainingTime() {
    return 0;
}

void UGameInstanceGameParameters::DestroyCharaEffect() {
}

int32 UGameInstanceGameParameters::DeleteUIParamLastOrderMember(EPlayerID _playerID) {
    return 0;
}

void UGameInstanceGameParameters::DeleteUIParamAllMember(EPlayerID _playerID) {
}

void UGameInstanceGameParameters::AddStoryWinStreakCount() {
}

void UGameInstanceGameParameters::AddStoryWinCount() {
}

UGameInstanceGameParameters::UGameInstanceGameParameters() {
    this->InputManagerClass = NULL;
    this->InputManager = NULL;
    this->bChinemaCamera = false;
    this->CharacterColorTable = NULL;
    this->CharacterListTable = NULL;
}

