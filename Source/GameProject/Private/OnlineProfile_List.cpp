#include "OnlineProfile_List.h"


int32 UOnlineProfile_List::GetFOLLOW_MAX_NUM() const {
    return 0;
}

UOnlineProfile_List::UOnlineProfile_List() {
    this->WBP_99_wdwA_title = NULL;
    this->BP_ScrollBox_A = NULL;
    this->arrow_L = NULL;
    this->arrow_R = NULL;
    this->ItemClass = NULL;
    this->CurrentItem = NULL;
    this->NowType = EOnlineProfileListType::FollowList;
    this->CurrentItemNum = 0;
}

