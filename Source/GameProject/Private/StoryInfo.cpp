#include "StoryInfo.h"

FStoryInfo::FStoryInfo() {
    this->MyTeam = ETeamID::NONE;
    this->iStoryWinCount = 0;
    this->iStoryScoreTime = 0;
    this->bStoryContinue = false;
    this->bStoryContinueLBS = false;
    this->bStoryContinueOrderSelect = false;
    this->bStoryContinueMemberSelect = false;
    this->bStoryCharaChenge = false;
    this->bExistRandomMember = false;
    this->iStoryWinStreakCount = 0;
    this->iNoContinueNum = 0;
    this->bContinueThisBattle = false;
    this->ContinueServiceType = EContinueServiceType::NoService;
    this->NextMovieID = EMovieID::NONE;
}

