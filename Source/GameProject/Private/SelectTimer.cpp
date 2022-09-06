#include "SelectTimer.h"

void USelectTimer::StopTimer(bool Stop) {
}

void USelectTimer::SetTimer(int32 NewCount) {
}

void USelectTimer::SetCountFocre(int32 NewCount) {
}

void USelectTimer::CheckTimerCount() {
}

USelectTimer::USelectTimer() {
    this->bTimerStoped = true;
    this->Count = 99;
    this->RealTime = 0.00f;
}

