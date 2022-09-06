#include "AnimatedImage.h"

void UAnimatedImage::Stop() {
}

void UAnimatedImage::SetTotalFrame(int32 totalFrame) {
}

void UAnimatedImage::SetImageSize(FVector2D _size) {
}

void UAnimatedImage::SetCurrentFrame(int32 frame) {
}

void UAnimatedImage::Play() {
}

int32 UAnimatedImage::GetCurrentFrame() {
    return 0;
}

UAnimatedImage::UAnimatedImage() {
    this->AutoInvisible = false;
    this->FramesPerSecond = 10;
    this->CurrentFrame = 0;
    this->TotalFrames = 1;
    this->Loop = false;
    this->bRenderTransIgnore = false;
    this->ImageUVFlag = false;
    this->AutoPlay = false;
}

