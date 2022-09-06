#include "BattleActor.h"
#include "BattleCharaMovementComponent.h"

void ABattleActor::SetActorVisibility(bool bNewVisibility) {
}

bool ABattleActor::IsMirror() {
    return false;
}

bool ABattleActor::IsActorVisible() const {
    return false;
}

EStageID ABattleActor::GetStageID() const {
    return EStageID::TRA_ST;
}

EPlayerID ABattleActor::GetPlayerID() const {
    return EPlayerID::Player1;
}

ECostumeType ABattleActor::GetCostumeType() const {
    return ECostumeType::Standard;
}

ECharaColorID ABattleActor::GetColorID() const {
    return ECharaColorID::NONE;
}

EActorTag ABattleActor::GetActorTag() const {
    return EActorTag::Character;
}

ABattleActor::ABattleActor() {
    this->m_characterID = ECharacterID::NONE;
    this->m_pAssetCbas = NULL;
    this->m_pAssetCact = NULL;
    this->m_pAssetCrct = NULL;
    this->m_pAssetCatk = NULL;
    this->m_pAssetCdmg = NULL;
    this->m_pAssetCmd = NULL;
    this->m_pAssetCseq = NULL;
    this->m_pAssetComb = NULL;
    this->m_pAssetCmtr = NULL;
    this->m_pAssetCeff = NULL;
    this->m_pCommonAssetCcmd = NULL;
    this->m_pAssetLeff = NULL;
    this->m_pAssetSlst = NULL;
    this->m_pCommonAssetSlst = NULL;
    this->m_pCelLightData = NULL;
    this->m_pActionExpansion = NULL;
    this->CharaMovement = CreateDefaultSubobject<UBattleCharaMovementComponent>(TEXT("BattleCharaMoveComp"));
}

