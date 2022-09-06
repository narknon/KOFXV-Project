#include "LeaderBoard_LeaderBoard.h"

class URankingRecord;
class UTexture2D;





bool ULeaderBoard_LeaderBoard::IsMyData(URankingRecord* Record) {
    return false;
}

bool ULeaderBoard_LeaderBoard::IsEGS() {
    return false;
}

FText ULeaderBoard_LeaderBoard::GetTimeStr(URankingRecord* Record) {
    return FText::GetEmpty();
}

UTexture2D* ULeaderBoard_LeaderBoard::GetTeamCharaTexture(URankingRecord* Record, int32 charaNo) {
    return NULL;
}

int32 ULeaderBoard_LeaderBoard::GetStarNumStr_Rank(URankingRecord* Record) {
    return 0;
}

FText ULeaderBoard_LeaderBoard::GetStarNumStr_Champ(URankingRecord* Record) {
    return FText::GetEmpty();
}

int32 ULeaderBoard_LeaderBoard::GetRankSwitcherType(URankingRecord* Record) {
    return 0;
}

FText ULeaderBoard_LeaderBoard::GetRankPointText(URankingRecord* Record) {
    return FText::GetEmpty();
}

FText ULeaderBoard_LeaderBoard::GetRankName(URankingRecord* Record) {
    return FText::GetEmpty();
}

FText ULeaderBoard_LeaderBoard::GetNetworkTitle(int32 TitleID) {
    return FText::GetEmpty();
}


ULeaderBoard_LeaderBoard::ULeaderBoard_LeaderBoard() {
    this->iCursor = 0;
    this->iCursorMax = 0;
    this->Page = 0;
    this->PageMax = 0;
    this->BP_ScrollBox_A_C_96 = NULL;
    this->arrow_L = NULL;
    this->arrow_R = NULL;
    this->DtTeamChara = NULL;
    this->MyRecord = NULL;
    this->RankmatchPointRanking = NULL;
    this->StoryScoreRanking = NULL;
    this->BossChallengeRanking = NULL;
}

