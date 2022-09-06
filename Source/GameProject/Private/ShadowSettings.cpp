#include "ShadowSettings.h"

FShadowSettings::FShadowSettings() {
    this->bUseShadowSettings = false;
    this->ShadowFilterSharpen = 0.00f;
    this->ShadowBias = 0.00f;
    this->ShadowSlopeBias = 0.00f;
    this->ContactShadowLength = 0.00f;
    this->DynamicShadowDistance = 0.00f;
    this->NumDynamicShadowCascades = 0;
}

