#include "BattleHudValueGetter.h"

void UBattleHudValueGetter::LikelyStun(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsSuperCancel(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsStun(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsReversalMove(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsQuickClimaxMode(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsPunish(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsGuardCrash(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsGuardCancel(bool& P1, bool& P2) {
}

bool UBattleHudValueGetter::IsFirstRound() {
    return false;
}

void UBattleHudValueGetter::IsDuringCombo(bool& p1inCombo, bool& p2inCombo) {
}

void UBattleHudValueGetter::IsCounterDamaged(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsClimaxMode(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsClimaxCancel(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsClimaxActionCombo(bool& P1, bool& P2) {
}

void UBattleHudValueGetter::IsAdvancedCancel(bool& P1, bool& P2) {
}

EPlayerID UBattleHudValueGetter::GetWinnerPlayerID() {
    return EPlayerID::Player1;
}

void UBattleHudValueGetter::GetWinCount(int32& P1, int32& P2) {
}

void UBattleHudValueGetter::GetTeamMemberIDArray(TArray<ECharacterID>& p1Team, TArray<ECharacterID>& p2Team) {
}

void UBattleHudValueGetter::GetStunPower(float& P1, float& P2) {
}

void UBattleHudValueGetter::GetPowerGauge(float& p1Bar, float& p2Bar, int32& p1Num, int32& p2Num, bool& p1IsMax, bool& p2IsMax) {
}

void UBattleHudValueGetter::GetOrder(int32& P1, int32& P2) {
}

EPlayerID UBattleHudValueGetter::GetLoserPlayerID() {
    return EPlayerID::Player1;
}

void UBattleHudValueGetter::GetLoseCount(int32& P1, int32& P2) {
}

void UBattleHudValueGetter::GetGuard(float& P1, float& P2) {
}

void UBattleHudValueGetter::GetGaugeHP(float& P1, float& P2) {
}

int32 UBattleHudValueGetter::GetCurrentRound() {
    return 0;
}

int32 UBattleHudValueGetter::GetCurrentBattleTime() {
    return 0;
}

void UBattleHudValueGetter::GetCombo(int32& P1, int32& P2, bool& p1vis, bool& p2vis) {
}

void UBattleHudValueGetter::GetClimaxGauge(float& P1, float& P2, int32& p1Max, int32& p2Max) {
}

void UBattleHudValueGetter::GetCharacterID(ECharacterID& P1, ECharacterID& P2) {
}

EGameOptionBattleTime UBattleHudValueGetter::GetBattleTime() {
    return EGameOptionBattleTime::Count60;
}

int32 UBattleHudValueGetter::GetBattleScore(EPlayerID ID) {
    return 0;
}

EGameOptionBattleWinRule UBattleHudValueGetter::GetBattleRule() {
    return EGameOptionBattleWinRule::SetCount1;
}

UBattleHudValueGetter::UBattleHudValueGetter() {
}

