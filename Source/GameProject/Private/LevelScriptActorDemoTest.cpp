#include "LevelScriptActorDemoTest.h"






void ALevelScriptActorDemoTest::TestFunc() {
}

FString ALevelScriptActorDemoTest::GetTagString(int32 pageNo, int32 ItemIndex) const {
    return TEXT("");
}

int32 ALevelScriptActorDemoTest::GetItemSettingNum(int32 pageNo, int32 ItemIndex) const {
    return 0;
}

int32 ALevelScriptActorDemoTest::GetItemSetting(int32 pageNo, int32 ItemIndex) const {
    return 0;
}

int32 ALevelScriptActorDemoTest::GetItemNum(int32 pageNo) const {
    return 0;
}

FString ALevelScriptActorDemoTest::GetContentsString(int32 pageNo, int32 ItemIndex, int32 select) const {
    return TEXT("");
}

ALevelScriptActorDemoTest::ALevelScriptActorDemoTest() {
    this->m_demoMode = EDemoTestMode::Normal;
    this->KakeaiSettingData = NULL;
}

