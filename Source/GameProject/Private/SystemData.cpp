#include "SystemData.h"

FKeyMap USystemData::TestKeyMapTest() {
    return FKeyMap{};
}

void USystemData::SetSystemTouchpad(bool flag) {
}

void USystemData::SetSubtitlesString(const FString& Subtitles) {
}

void USystemData::SetStoryBattleTime(EGameOptionBattleTime Val) {
}

void USystemData::SetStoryAiLevel(EGameOptionAILevel Val) {
}

void USystemData::SetSaveDataMapped(TArray<uint8> Mapped, EPlayerID PlayerID) {
}

void USystemData::SetPauseType(EPauseType Val) {
}

void USystemData::SetMaxRoundNumSingle(EGameOptionBattleWinRule Val) {
}

void USystemData::SetLanguageString(const FString& Language) {
}

void USystemData::SetKeyMapDefault(int32 PlayerIndex, EDeviceType DeviceType) {
}

void USystemData::SetKeyMap(int32 PlayerIndex, FKeyMap& KeyMap) {
}

void USystemData::SetInputDelay(int32 PlayerIndex, int32 Delay) {
}

void USystemData::SetDefaultTouchpad() {
}

void USystemData::SetDefaultSystemInfo() {
}

void USystemData::SetDefaultLanguageInfo() {
}

void USystemData::SetDefaultGameInfo() {
}

void USystemData::SetBrightnessParam(int32 brightness_param) {
}

void USystemData::SetBattleTime(EGameOptionBattleTime Val) {
}

void USystemData::SetAnalogStickType(EAnalogStickType Val) {
}

void USystemData::SetAiLevel(EGameOptionAILevel Val) {
}

bool USystemData::IsLanguageJp() {
    return false;
}

bool USystemData::GetSystemVibration() {
    return false;
}

bool USystemData::GetSystemTouchpad() {
    return false;
}

FString USystemData::GetSubtitlesString() {
    return TEXT("");
}

EGameOptionBattleTime USystemData::GetStoryBattleTime() {
    return EGameOptionBattleTime::Count60;
}

EGameOptionAILevel USystemData::GetStoryAiLevel() {
    return EGameOptionAILevel::VeryEasy;
}

bool USystemData::GetSoftwareDecoderFlag() {
    return false;
}

TArray<uint8> USystemData::GetSaveDataMapped(EPlayerID PlayerID) {
    return TArray<uint8>();
}

EPauseType USystemData::GetPauseType() {
    return EPauseType::Once;
}

EGameOptionBattleWinRule USystemData::GetMaxRoundNumSingle() {
    return EGameOptionBattleWinRule::SetCount1;
}

bool USystemData::GetLowQualityStageFlag() {
    return false;
}

FString USystemData::GetLanguageString() {
    return TEXT("");
}

FKeyMap USystemData::GetKeyMap(int32 PlayerIndex) {
    return FKeyMap{};
}

TMap<EFightingConfigKey, EKeyOperation> USystemData::GetKeyboardKeyMap(int32 PlayerIndex) {
    return TMap<EFightingConfigKey, EKeyOperation>();
}

int32 USystemData::GetInputDelay(int32 PlayerIndex) {
    return 0;
}

TMap<EFightingConfigKey, EKeyOperation> USystemData::GetGamepadKeyMap(int32 PlayerIndex) {
    return TMap<EFightingConfigKey, EKeyOperation>();
}

TArray<uint8> USystemData::GetDefaultButtonConfig(EPlayerID PlayerID) {
    return TArray<uint8>();
}

TMap<EFightingConfigKey, EKeyOperation> USystemData::GetCustomKeyMap(int32 PlayerIndex) {
    return TMap<EFightingConfigKey, EKeyOperation>();
}

EGameOptionBattleTime USystemData::GetBattleTime() {
    return EGameOptionBattleTime::Count60;
}

EAnalogStickType USystemData::GetAnalogStickType() {
    return EAnalogStickType::Off;
}

EGameOptionAILevel USystemData::GetAiLevel() {
    return EGameOptionAILevel::VeryEasy;
}

USystemData::USystemData() {
    this->bVisibleTutorialKeyData = false;
    this->bVisibleTrialKeyData = false;
    this->ButtonConfigInfo.AddDefaulted(4);
    this->RoomEntryType = 1;
    this->OnlineTrainingEntryType = 1;
    this->SwitchItemIndex_Create.AddDefaulted(11);
    this->SwitchItemIndex_Search.AddDefaulted(9);
    this->SwitchItemIndex_OnlineTrainingCreate.AddDefaulted(2);
    this->SwitchItemIndex_OnlineTrainingSearch.AddDefaulted(2);
    this->InputDelay.AddDefaulted(2);
    this->TelemetryLastUpdate = 0;
    this->TotalLoginCount = 0;
    this->AccountIdHash = 0;
    this->IsAgree = false;
    this->IsFirstOnlineReplay = true;
}

