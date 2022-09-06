#include "FightingGameState.h"

class AFightingGameState;

void AFightingGameState::SetUniqueKOCharacterID(ECharacterID character_id) {
}

void AFightingGameState::SetStageID(EStageID _stageID) {
}

void AFightingGameState::SetMemberCount(EPlayerID _playerID, int32 memberCount) {
}

void AFightingGameState::SetHandicap(EPlayerID _playerID, EBattleHandicap _handicap) {
}

void AFightingGameState::SetFinishSelectStage(bool _finish) {
}

void AFightingGameState::SetFightingGameData(const FFightingGameData& _fightData) {
}

void AFightingGameState::SetCharacterID(EPlayerID _playerID, ECharacterID _charaID, int32 _orderID) {
}

void AFightingGameState::SetCharacterCostumeType(EPlayerID _playerID, ECostumeType _costumeType, int32 _orderID) {
}

void AFightingGameState::SetCharaColorID(EPlayerID _playerID, ECharaColorID _colorID, int32 _orderID) {
}

bool AFightingGameState::IsTeamBattle() const {
    return false;
}

bool AFightingGameState::IsSelectedCharacterSame() const {
    return false;
}

bool AFightingGameState::IsRemaining1Win(EPlayerID PlayerID) const {
    return false;
}

bool AFightingGameState::IsPlayerBattleFinished(EPlayerID PlayerID) const {
    return false;
}

bool AFightingGameState::IsFreeMatchBattleFinished() const {
    return false;
}

bool AFightingGameState::IsFirstRound() const {
    return false;
}

bool AFightingGameState::IsFinalRoundKachinuki(int32 round_number) const {
    return false;
}

bool AFightingGameState::IsFinalRound() const {
    return false;
}

bool AFightingGameState::IsExtraRound() const {
    return false;
}

bool AFightingGameState::IsBattleFinished() const {
    return false;
}

ECharacterID AFightingGameState::GetUniqueKOCharacterID() {
    return ECharacterID::NONE;
}

EStageID AFightingGameState::GetStageID() const {
    return EStageID::TRA_ST;
}

int32 AFightingGameState::GetMemberCount(EPlayerID _playerID) const {
    return 0;
}

AFightingGameState* AFightingGameState::GetInstance() {
    return NULL;
}

EBattleHandicap AFightingGameState::GetHandicap(EPlayerID _playerID) const {
    return EBattleHandicap::Level1;
}

FFightingGameData AFightingGameState::GetFightingGameData() {
    return FFightingGameData{};
}

int32 AFightingGameState::GetCharacterUniqueID(EPlayerID _playerID, int32 _orderID) const {
    return 0;
}

ECharacterID AFightingGameState::GetCharacterID(EPlayerID _playerID, int32 _orderID) const {
    return ECharacterID::NONE;
}

ECostumeType AFightingGameState::GetCharacterCostumeType(EPlayerID _playerID, int32 _orderID) const {
    return ECostumeType::Standard;
}

ECharaColorID AFightingGameState::GetCharaColorID(EPlayerID _playerID, int32 _orderID) const {
    return ECharaColorID::NONE;
}

int32 AFightingGameState::GetBattleRound() const {
    return 0;
}

EBattleResult AFightingGameState::GetBattleResult() const {
    return EBattleResult::NONE;
}

int32 AFightingGameState::DeleteLastOrderMember(EPlayerID _playerID) {
    return 0;
}

void AFightingGameState::DeleteAllMember(EPlayerID _playerID) {
}

AFightingGameState::AFightingGameState() {
    this->isDevelopmentScreen = false;
    this->finishSelectChara = false;
    this->finishSelectStage = false;
    this->P1OperationType = EPlayerOperationType::Human;
    this->P2OperationType = EPlayerOperationType::Human;
}

