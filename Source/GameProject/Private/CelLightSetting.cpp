#include "CelLightSetting.h"

FCelLightSetting::FCelLightSetting() {
    this->bCelLightEnable = false;
    this->CelLightSpeed = 0;
    this->bCharaLightEnable = false;
    this->bMirrorIgnore = false;
    this->KeyLightPower = 0.00f;
    this->KeyLightSpeed = 0;
    this->BackLightPower = 0.00f;
    this->BackLightSpeed = 0;
    this->FillLightPower = 0.00f;
    this->FillLightSpeed = 0;
    this->FakeRimLightPower = 0.00f;
    this->FakeRimLightSpeed = 0;
    this->LeftEyeLightPower = 0.00f;
    this->LeftEyeLightSpeed = 0;
    this->RightEyeLightPower = 0.00f;
    this->RightEyeLightSpeed = 0;
    this->bUseSeparateRHSSettings = false;
    this->RHS_LeftEyeLightPower = 0.00f;
    this->RHS_LeftEyeLightSpeed = 0;
    this->RHS_RightEyeLightPower = 0.00f;
    this->RHS_RightEyeLightSpeed = 0;
    this->LHSFaceLightPower = 0.00f;
    this->LHSFaceOuterConeAngle = 0.00f;
    this->LHSFaceLightSpeed = 0;
    this->RHSFaceLightPower = 0.00f;
    this->RHSFaceOuterConeAngle = 0.00f;
    this->RHSFaceLightSpeed = 0;
}

