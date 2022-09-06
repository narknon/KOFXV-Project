#include "DebugGameInstanceSubsystem.h"

void UDebugGameInstanceSubsystem::SetUseDummyOnlineID(bool use) {
}

void UDebugGameInstanceSubsystem::SetSpecialWinDirection(bool bFlag) {
}

void UDebugGameInstanceSubsystem::SetResultCheckCursorNum(TArray<int32> ResultCheckCursorNumArray) {
}

void UDebugGameInstanceSubsystem::SetHudHidden(bool bHidden) {
}

void UDebugGameInstanceSubsystem::SetDummyOnlineID(EPlayerID PlayerID, TArray<FText> dummy) {
}

void UDebugGameInstanceSubsystem::SetDebugResultVoiceEventName(const FString& EventName) {
}

void UDebugGameInstanceSubsystem::SetDebugMenuOpen(bool DebugMenuOpen) {
}

bool UDebugGameInstanceSubsystem::IsUseDummyOnlineID() const {
    return false;
}

bool UDebugGameInstanceSubsystem::IsDebugMenuOpen() const {
    return false;
}

void UDebugGameInstanceSubsystem::GetStageNameString(EStageID StageID, FString& StageName) {
}

bool UDebugGameInstanceSubsystem::GetSpecialWinDirection() {
    return false;
}

TArray<int32> UDebugGameInstanceSubsystem::GetResultCheckCursorNum() {
    return TArray<int32>();
}

bool UDebugGameInstanceSubsystem::GetHudHiddne() {
    return false;
}

void UDebugGameInstanceSubsystem::GetGameModeNameString(EGameMode GameModeID, FString& GameModeName) {
}

TArray<FText> UDebugGameInstanceSubsystem::GetDummyOnlineID(EPlayerID PlayerID) const {
    return TArray<FText>();
}

void UDebugGameInstanceSubsystem::GetCharaNameString(ECharacterID charaID, FString& CharaName) {
}

UDebugGameInstanceSubsystem::UDebugGameInstanceSubsystem() {
    this->bStageSafeAreaCheck = false;
    this->bStageSafeAreaVisible = false;
}

