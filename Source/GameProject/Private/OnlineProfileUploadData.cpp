#include "OnlineProfileUploadData.h"

FOnlineProfileUploadData::FOnlineProfileUploadData() {
    this->Shougou = ENetworkTitleID::ID01;
    this->RankmatchPoint = 0;
    this->Ranking = 0;
    this->MaxRenshoSu = 0;
    this->Follower = 0;
    this->FairPlayScore = 0;
    this->RenshoSu = 0;
    this->bPublishedBattleRecord = false;
    this->PingSum = 0;
    this->TotalGameNum = 0;
    this->OutSyncCount = 0;
    this->IsResetFairPlayScoreIn120 = false;
}

