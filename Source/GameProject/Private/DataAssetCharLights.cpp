#include "DataAssetCharLights.h"

UDataAssetCharLights::UDataAssetCharLights() {
    this->BackLightIntensity = 1.00f;
    this->BackLightAffectsWorld = false;
    this->BackLightCastShadows = false;
    this->BackLightIndirectLightingIntensity = 0.00f;
    this->BackLightCastTranslucentShadows = false;
    this->BackLightCastStaticShadows = false;
    this->BackLightCastDynamicShadows = false;
    this->BackLightAffectTranslucentLighting = false;
    this->BackLightCastVolumetricShadow = false;
    this->BackLightCastRaytracedShadow = false;
    this->BackLightVisible = false;
    this->FillLightIntensity = 0.50f;
    this->FillLightAffectsWorld = false;
    this->FillLightCastShadows = false;
    this->FillLightIndirectLightingIntensity = 0.00f;
    this->FillLightCastTranslucentShadows = false;
    this->FillLightCastStaticShadows = false;
    this->FillLightCastDynamicShadows = false;
    this->FillLightAffectTranslucentLighting = false;
    this->FillLightCastVolumetricShadow = false;
    this->FillLightCastRaytracedShadow = false;
    this->FillLightVisible = false;
    this->KeyLightIntensity = 2.00f;
    this->KeyLightAffectsWorld = true;
    this->KeyLightCastShadows = true;
    this->KeyLightIndirectLightingIntensity = 0.00f;
    this->KeyLightShadowAtlasResolutionScale = 3.00f;
    this->KeyLightBattleCameraShadowFilterSharpen = 0.40f;
    this->KeyLightEnshutsuCameraShadowFilterSharpen = 0.10f;
    this->KeyLightBattleCameraShadowBias = 0.50f;
    this->KeyLightBattleCameraFullHDShadowBias = 0.10f;
    this->KeyLightEnshutsuCameraShadowBias = 0.50f;
    this->KeyLightBattleCameraShadowSlopeBias = 0.50f;
    this->KeyLightEnshutsuCameraShadowSlopeBias = 0.50f;
    this->KeyLightBattleCameraContactShadowLength = 6.00f;
    this->KeyLightEnshutsuCameraContactShadowLength = 0.00f;
    this->KeyLightContactShadowLengthWorld = true;
    this->KeyLightBattleCameraDynamicShadowDistance = 4000.00f;
    this->KeyLightEnshutsuCameraDynamicShadowDistance = 700.00f;
    this->KeyLightBattleCameraNumDynamicShadowCascades = 1;
    this->KeyLightEnshutsuCameraNumDynamicShadowCascades = 2;
    this->KeyLightCastTranslucentShadows = false;
    this->KeyLightCastStaticShadows = false;
    this->KeyLightCastDynamicShadows = true;
    this->KeyLightAffectTranslucentLighting = false;
    this->KeyLightCastVolumetricShadow = false;
    this->KeyLightCastRaytracedShadow = false;
    this->KeyLightVisible = true;
    this->LHSRimLightIntensity = 0.80f;
    this->RHSRimLightIntensity = 0.80f;
    this->LeftEyeLightIntensity = 0.00f;
    this->RightEyeLightIntensity = 0.00f;
    this->MirrorCPULights = false;
}

