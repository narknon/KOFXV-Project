#include "PrimaryAssetSubsystem.h"

void UPrimaryAssetSubsystem::UnloadPrimaryAssetsByChannel(ELoadChannel Channel) {
}

void UPrimaryAssetSubsystem::PendingListRemove(ELoadChannel Channel, FPrimaryAssetId ID) {
}

void UPrimaryAssetSubsystem::PendingListClear(ELoadChannel Channel) {
}

void UPrimaryAssetSubsystem::PendingListAppend(ELoadChannel Channel, TArray<FPrimaryAssetId> IDList) {
}

void UPrimaryAssetSubsystem::PendingListAdd(ELoadChannel Channel, FPrimaryAssetId ID) {
}

bool UPrimaryAssetSubsystem::IsAyncLoading() const {
    return false;
}

TArray<FPrimaryAssetId> UPrimaryAssetSubsystem::GetPendingList(ELoadChannel Channel) const {
    return TArray<FPrimaryAssetId>();
}

ELoadChannel UPrimaryAssetSubsystem::GetLoadingChannel() const {
    return ELoadChannel::ELC_NONE;
}

TArray<FPrimaryAssetId> UPrimaryAssetSubsystem::GetLoadedList(ELoadChannel Channel) const {
    return TArray<FPrimaryAssetId>();
}

TArray<FName> UPrimaryAssetSubsystem::ExplicitArray() {
    return TArray<FName>();
}

FName UPrimaryAssetSubsystem::Explicit() {
    return NAME_None;
}

bool UPrimaryAssetSubsystem::TryExecuteGarbageCollection(bool bPerformFullPurge) {
    return false;
}

void UPrimaryAssetSubsystem::ForceExecuteGarbageCollection(bool bFullPurge) {
}

void UPrimaryAssetSubsystem::EndSenceTravelTimeCount() {
}

void UPrimaryAssetSubsystem::EndPrimaryAssetLoadTimeCount() {
}

void UPrimaryAssetSubsystem::BeginSenceTravelTimeCount() {
}

void UPrimaryAssetSubsystem::BeginPrimaryAssetLoadTimeCount() {
}

void UPrimaryAssetSubsystem::AsyncLoadPendingList(ELoadChannel Channel) {
}

UPrimaryAssetSubsystem::UPrimaryAssetSubsystem() {
}

