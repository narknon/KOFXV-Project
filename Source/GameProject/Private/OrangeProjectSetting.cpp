#include "OrangeProjectSetting.h"

UOrangeProjectSetting::UOrangeProjectSetting() {
    this->DefaultCursorRepeatFrame = 12;
    this->DefaultCursorFinalRepeatFrame = 4;
    this->CharacterSelectCursorRepeatFrame = 20;
    this->CharacterSelectCursorFinalRepeatFrame = 3;
    this->EntryRepeatFrame = 15;
    this->EntryFinalRepeatFrame = 4;
    this->CharacterStringTablePathFormat = TEXT("/Game/GameContent/UI/StringTable/Chara/Key_Chara_{0}");
    this->CharacterAssetPathFormat = TEXT("/Game/GameContent/Character/{0}/Blueprints/BP_{0}_{1}");
    this->GameBattleLevelPathFormat = TEXT("/Game/GameContent/Maps/GameBattle/{0}");
    this->StageLevelPathFormat = TEXT("/Game/GameContent/Maps/bg/ST_{0}");
    this->StageLevelPathFormat_CN = TEXT("/Game/GameContent/Maps/bg/zh-ST_{0}");
    this->LevelNameHead = TEXT("GameBattle_");
    this->LevelNameHead_CN = TEXT("zh-GameBattle_");
    this->StaitcAssets.AddDefaulted(5);
    this->NetworkVersion = 140;
    this->UdpPort = 12345;
    this->TcpPort = 15432;
    this->JoinJudgeNumMax = 15;
    this->JoinJudgeNumMin = 10;
    this->JoinJudgeAdmitTimeout = 8.00f;
    this->JoinJudgeRequestTimeout = 8.00f;
    this->ReplayVersion = 140;
    this->bChinaRegion = false;
}

