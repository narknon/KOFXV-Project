#include "EffekseerEffectMaterialParameterHolder.h"

UEffekseerEffectMaterialParameterHolder::UEffekseerEffectMaterialParameterHolder() {
    this->Texture = NULL;
    this->NormalTexture = NULL;
    this->TextureAddressType = 0;
    this->AlphaTexture = NULL;
    this->AlphaTextureAddressType = 0;
    this->UVDistortionTexture = NULL;
    this->UVDistortionTextureAddressType = 0;
    this->BlendTexture = NULL;
    this->BlendTextureAddress = 0;
    this->BlendAlphaTexture = NULL;
    this->BlendAlphaTextureAddress = 0;
    this->BlendUVDistortionTexture = NULL;
    this->BlendUVDistortionTextureAddress = 0;
    this->UVDistortionIntensity = 1.00f;
    this->TextureBlendType = -1;
    this->BlendUVDistortionIntensity = 1.00f;
    this->EnableFalloff = false;
    this->EmissiveScaling = 1;
    this->AlphaBlend = EEffekseerAlphaBlendType::Opacity;
    this->IsDepthTestDisabled = false;
    this->IsLighting = false;
    this->IsDistorted = false;
    this->PlayerID = 0;
    this->DepthOffset = 0.00f;
    this->PersProjRate = 0.00f;
    this->OverrideType = 0;
}

