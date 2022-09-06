#include "StageSelect_Select.h"


void UStageSelect_Select::unselOn() {
}

void UStageSelect_Select::unselOff() {
}

void UStageSelect_Select::TimeoutSelect() {
}

void UStageSelect_Select::SetStageNotNew(EStageID stage) {
}

EStageID UStageSelect_Select::RandomStage() const {
    return EStageID::TRA_ST;
}

void UStageSelect_Select::OnlineSelectedStage(EStageID StageID) {
}

void UStageSelect_Select::OnlineMovedStageSelectCursor(EStageID StageID) {
}

void UStageSelect_Select::MovedStageSelectCursor(EStageID StageID) {
}


bool UStageSelect_Select::IsNewStage(EStageID stage) const {
    return false;
}

bool UStageSelect_Select::IsAvailableStageIndex(int32 Index) const {
    return false;
}

bool UStageSelect_Select::IsAvailableStage(EStageID stage) const {
    return false;
}

void UStageSelect_Select::InitStageData() {
}

FText UStageSelect_Select::GetTextAsStageID(EStageID stage) {
    return FText::GetEmpty();
}

TArray<EStageID> UStageSelect_Select::GetDisableStageCN() const {
    return TArray<EStageID>();
}

void UStageSelect_Select::GetBgmTextAsStageID(const EStageID stage, FText& BgmTitle, FText& BgmSubtitle) {
}

void UStageSelect_Select::ConnectOnlineGameSubsystem() {
}

UStageSelect_Select::UStageSelect_Select() {
    this->LastStayIndex = 0;
    this->NumberPage = 5;
    this->StageNameStringTable = NULL;
    this->SystemWindowBackTitle = NULL;
    this->DefaultStage = EStageID::TRA_ST;
}

