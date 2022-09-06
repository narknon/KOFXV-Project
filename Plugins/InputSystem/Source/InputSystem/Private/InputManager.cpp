#include "InputManager.h"

void UInputManager::Update() {
}

void UInputManager::SetVibrationPrimaryUser(float vibSec, int32 largeMotor, int32 smallMotor) {
}

void UInputManager::SetVibration(int32 fighterIndex, float vibSec, int32 largeMotor, int32 smallMotor) {
}

void UInputManager::SetRepeatFrame(int32 Start, int32 End) {
}

void UInputManager::SetPrimaryUserIndex(int32 PlayerIndex) {
}

void UInputManager::SetKeyMap(int32 PlayerIndex, const FKeyMap& mapper) {
}

void UInputManager::SetKey(int32 PlayerIndex, EFightingConfigKey FightingConfigKey, EKeyOperation KeyOperation, EDeviceType DeviceType) {
}

void UInputManager::SetInvalidVibration(int32 fighterIndex, bool flag) {
}

void UInputManager::SetDummy(int32 UserIndex, int32 dummy) {
}

void UInputManager::SetDefaultKey(int32 PlayerIndex, EDeviceType DeviceType, EDefaultMapType DefaultMapType) {
}

void UInputManager::ResetInputKeys() {
}

bool UInputManager::IsKeyBoard() {
    return false;
}

bool UInputManager::IsAcceptKeyCross(int32 PlayerIndex) {
    return false;
}

void UInputManager::Initialize() {
}

int32 UInputManager::GetPrimaryUserIndex() {
    return 0;
}

int32 UInputManager::GetPlayerID(int32 ControllerId) {
    return 0;
}

FKeyMap UInputManager::GetKeyMap(int32 fighterIndex) {
    return FKeyMap{};
}

int32 UInputManager::GetKeyboardID() {
    return 0;
}

EInputDeviceType UInputManager::GetInputDeviceType(int32 PlayerIndex) {
    return EInputDeviceType::PS4;
}

int32 UInputManager::GetDummy(int32 UserIndex) {
    return 0;
}

int32 UInputManager::GetControllerID(int32 PlayerIndex) {
    return 0;
}

void UInputManager::DeleteKey(int32 PlayerIndex, EFightingConfigKey FightingConfigKey, EDeviceType DeviceType) {
}

void UInputManager::ChangeOperationTable(bool isEs) {
}

void UInputManager::AssignUser(int32 PlayerIndex, int32 ControllerId, EDeviceType Type) {
}

void UInputManager::AssignInitialize() {
}

UInputManager::UInputManager() {
    this->UiOperationTable = NULL;
    this->UiOperationTableES = NULL;
    this->KeyMapManager = NULL;
}

