#include "DataAssetCameraParam.h"

UDataAssetCameraParam::UDataAssetCameraParam() {
    this->CameraMinHeight = 12.50f;
    this->CameraMaxHeight = 13.85f;
    this->CameraMinDistance = 52.50f;
    this->CameraMaxDistance = 59.50f;
    this->CameraScreenEndRange = 21.50f;
    this->CameraHeightDistance = 20.00f;
    this->CameraVerticalMoveAdjust = 7.00f;
    this->LookYPosAdjust = 1.00f;
    this->LookZDist = 50.00f;
    this->ProjPerseAngle = 32.27f;
    this->ProjNear = 0.00f;
    this->ProjFar = 0.00f;
    this->ProjBlendScale = 0.50f;
}

