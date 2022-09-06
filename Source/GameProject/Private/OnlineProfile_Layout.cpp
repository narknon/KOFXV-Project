#include "OnlineProfile_Layout.h"






void UOnlineProfile_Layout::OnFollowErrorCheckOnline(ECheckOnlineResult Result) {
}

void UOnlineProfile_Layout::OnCheckNetworkComplete(ECheckOnlineResult Result) {
}

void UOnlineProfile_Layout::OnCheckNetwork_OpenInitFriendList(ECheckOnlineResult Result) {
}

void UOnlineProfile_Layout::OnCheckNetwork_OpenInitFollowList(ECheckOnlineResult Result) {
}

void UOnlineProfile_Layout::OnCheckNetwork_OnDownloadFriendProfileComplete(ECheckOnlineResult Result) {
}

void UOnlineProfile_Layout::OnCheckNetwork_OnDownloadFollowProfileComplete(ECheckOnlineResult Result) {
}


void UOnlineProfile_Layout::CloseTitleList() {
}

void UOnlineProfile_Layout::CloseRankMatchHistory(int32 PlayerID, EUiOperation Operation) {
}





void UOnlineProfile_Layout::CloseBattleSetting(int32 PlayerID, EUiOperation Operation) {
}

UOnlineProfile_Layout::UOnlineProfile_Layout() {
    this->WBP_03_04_Profile = NULL;
    this->WBP_03_04_List = NULL;
    this->WBP_03_04_Profile_2 = NULL;
    this->WBP_03_04_PlayerSettingMenu = NULL;
    this->WBP_03_FairPlayScore_window = NULL;
    this->WBP_99_wdw_report = NULL;
    this->WBP_95_01_TitlesList = NULL;
    this->ActiveWindow = EActiveWindowOnlineProfile::None;
    this->BackActiveWindow = EActiveWindowOnlineProfile::None;
    this->GameData = NULL;
    this->SceneMgtGameInstance = NULL;
    this->InputManager = NULL;
}

