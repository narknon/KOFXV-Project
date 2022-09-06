#include "MainViewportWidget.h"

class UOperationalWidget;
class UBaseWidget;
class UWidget;

void UMainViewportWidget::UnloadAllAssets() {
}

void UMainViewportWidget::TravelToScene_Implementation(ESceneName Scene) {
}

void UMainViewportWidget::SetPendingKill() {
}

void UMainViewportWidget::SetIsNetworkCheck(bool Val) {
}

void UMainViewportWidget::SetIsBlackFade(bool Val) {
}

bool UMainViewportWidget::SetCurrentSection(UOperationalWidget* in_target) {
    return false;
}

void UMainViewportWidget::SetCulture() {
}


void UMainViewportWidget::LoadAndSpawnEffect() {
}

bool UMainViewportWidget::IsPendingkill() const {
    return false;
}

void UMainViewportWidget::IndicatorAnimStop(EIndicatorType Type) {
}

void UMainViewportWidget::IndicatorAnimPlay(EIndicatorType Type) {
}

bool UMainViewportWidget::GetIsNetworkCheck() {
    return false;
}

bool UMainViewportWidget::GetIsBlackFade() {
    return false;
}

UOperationalWidget* UMainViewportWidget::getCurrentSection() const {
    return NULL;
}

ESceneName UMainViewportWidget::GetCurrentScene() const {
    return ESceneName::SN_Title;
}

float UMainViewportWidget::GeneralInitialProcess(UBaseWidget* InWidget) {
    return 0.0f;
}

void UMainViewportWidget::CloseAllSceneWithoutMainMenu(const bool bClean) {
}

void UMainViewportWidget::CloseAllSceneForLoad() {
}



void UMainViewportWidget::AddSectionToScreenPanel(UWidget* ChildContent, EViewportZOrder inZOrder) {
}

UMainViewportWidget::UMainViewportWidget() {
    this->currentSection = NULL;
    this->WBP_Fade = NULL;
    this->bPendingKill = false;
}

