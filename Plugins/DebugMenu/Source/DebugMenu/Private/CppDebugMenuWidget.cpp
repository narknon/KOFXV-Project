#include "CppDebugMenuWidget.h"








int32 UCppDebugMenuWidget::GetSvnRevision() {
    return 0;
}

void UCppDebugMenuWidget::ExecuteOpen() {
}

void UCppDebugMenuWidget::ExecuteNumberData(const FString& Category, const FString& Description, float Value) {
}

void UCppDebugMenuWidget::ExecuteIntData(const FString& Category, const FString& Description, int32 Value) {
}

void UCppDebugMenuWidget::ExecuteEnumData(const FString& Category, const FString& Description, FName EnumName) {
}

void UCppDebugMenuWidget::ExecuteComboBox(const FString& Category, const FString& Description, int32 Value) {
}

void UCppDebugMenuWidget::ExecuteClose() {
}

void UCppDebugMenuWidget::ExecuteCheckBox(const FString& Category, const FString& Description, bool IsChecked) {
}

void UCppDebugMenuWidget::ExecuteButton(const FString& Category, const FString& Description) {
}

void UCppDebugMenuWidget::CloseDebugMenu() {
}

UCppDebugMenuWidget::UCppDebugMenuWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CategoryList = NULL;
    this->ButtonList = NULL;
    this->FocusWidget = NULL;
    this->CategoryFocusWidget = NULL;
    this->FocusScrollBox = NULL;
    this->ChangeValueUnit = 1.00f;
}

