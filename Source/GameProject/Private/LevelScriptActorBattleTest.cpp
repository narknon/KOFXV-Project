#include "LevelScriptActorBattleTest.h"

void ALevelScriptActorBattleTest::OnOnionStreamProcessFinish() {
}









ALevelScriptActorBattleTest::ALevelScriptActorBattleTest() {
    this->m_P1CharacterID = ECharacterID::KYO;
    this->m_P1CharacterColorID = ECharaColorID::COLOR1;
    this->m_P1CharacterCostumeType = ECostumeType::Standard;
    this->m_P1OperationType = EPlayerOperationType::Human;
    this->m_P2CharacterID = ECharacterID::KYO;
    this->m_P2CharacterColorID = ECharaColorID::COLOR2;
    this->m_P2CharacterCostumeType = ECostumeType::Standard;
    this->m_P2OperationType = EPlayerOperationType::Human;
    this->m_OverrideStageID = EStageID::NONE;
    this->bStageLoadedComplete = false;
    this->bNeedStageLoading = false;
    this->m_charLightData = NULL;
    this->m_StageDemoData = NULL;
}

