#include "CameraDirector.h"

class AActor;

AActor* ACameraDirector::GetCurrentCamera() {
    return NULL;
}

ACameraDirector::ACameraDirector() {
    this->CameraMain = NULL;
    this->EnshutsuCameraMain = NULL;
    this->CameraLookTarget = NULL;
    this->CameraMaxFocalDistance = 300;
    this->CameraDualLongShotRelativeDistance = 350;
    this->CameraLongShotDistance = 400;
    this->CameraMidUpDistance = 135;
    this->CameraCloseUpDistance = 65;
    this->DualLongShotLens = 20.00f;
    this->LongShotLens = 20.00f;
    this->MidShotLens = 20.00f;
    this->MidUpShotLens = 10.00f;
    this->CloseUpShotLens = 5.00f;
}

