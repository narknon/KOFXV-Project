#include "BattleParticleSystemActor.h"



void ABattleParticleSystemActor::SetVisibility(bool bVisibility) {
}

void ABattleParticleSystemActor::SetPlayFromBeginningFlag(bool fromBeginning) {
}

void ABattleParticleSystemActor::SetPlaybackSpeed(float _Speed) {
}

void ABattleParticleSystemActor::SetMirror(bool bMirror) {
}

void ABattleParticleSystemActor::SetEmitFlagOverride(bool bFlag) {
}

void ABattleParticleSystemActor::SetEmitFlag(bool bCanSpawnParticle) {
}

void ABattleParticleSystemActor::ReregisterComponent() {
}

bool ABattleParticleSystemActor::IsParticlesSurvive() const {
    return false;
}


int32 ABattleParticleSystemActor::GetOwnerCharacterVitality() const {
    return 0;
}

bool ABattleParticleSystemActor::GetEmitFlag() const {
    return false;
}

ABattleParticleSystemActor::ABattleParticleSystemActor() {
    this->bNaturalDeathFlag = true;
    this->bLifeUnlimited = true;
    this->bAutoDestroy = false;
    this->LifeTime = 0.00f;
    this->ColorID = ECharaColorID::NONE;
    this->PlayerID = 3;
    this->bIsMirror = false;
    this->bIsEmitterEnabled = true;
    this->bEmitterEnabledRemoveOverride = false;
}

