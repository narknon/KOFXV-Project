#include "BaseWidget.h"

class UWidgetAnimation;
class UTexture2D;
class UUMGSequencePlayer;
class UDataTable;

void UBaseWidget::UpdateHUDScaleValueOffset_Implementation() {
}

void UBaseWidget::UpdateFlip_Implementation() {
}

bool UBaseWidget::StopAnimationByName(FName AnimationName) {
    return false;
}

bool UBaseWidget::ShouldBeFlip() {
    return false;
}

void UBaseWidget::SetWidgetSide_Implementation(int32 WidgetSide_Player) {
}

FScaleOffsetData UBaseWidget::SetScaleOffsetMaxTransform(FScaleOffsetData& TargetStruct, FWidgetTransform MaxTransform) {
    return FScaleOffsetData{};
}

FScaleOffsetData UBaseWidget::SetScaleOffsetMaxPivot(FScaleOffsetData& TargetStruct, FVector2D MaxPivot) {
    return FScaleOffsetData{};
}

void UBaseWidget::RemoteEvent(FName EventName) {
}

UUMGSequencePlayer* UBaseWidget::PlayAnimationByNameReturnPlayer(FName AnimationName, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed) {
    return NULL;
}

bool UBaseWidget::PlayAnimationByName(FName AnimationName, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed) {
    return false;
}

float UBaseWidget::PauseAnimationByName(FName AnimationName) {
    return 0.0f;
}

TMap<ECharacterID, UTexture2D*> UBaseWidget::MakeCharacterTextureMapFromDataTable(UDataTable* DataTable) {
    return TMap<ECharacterID, UTexture2D*>();
}

bool UBaseWidget::IsAnimationPlayingByName(FName AnimationName) {
    return false;
}

void UBaseWidget::InitializeScaleOffsetData_Implementation() {
}

int32 UBaseWidget::GetWidgetSide() const {
    return 0;
}

float UBaseWidget::GetHUDScaleValueValue() {
    return 0.0f;
}

float UBaseWidget::GetAnimationCurrentTimeByName(FName AnimationName) {
    return 0.0f;
}

UWidgetAnimation* UBaseWidget::GetAnimationByName(FName AnimationName) const {
    return NULL;
}

UTexture2D* UBaseWidget::FindCharacterTextureFromDataTable(UDataTable* DataTable, ECharacterID charaID) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UBaseWidget::FindCharacterSoftTextureFromDataTable(UDataTable* DataTable, ECharacterID charaID) {
    return NULL;
}

UTexture2D* UBaseWidget::FindCharacterCostumeTextureFromDataTable(UDataTable* DataTable, ECharacterID charaID, ECostumeType cosType) {
    return NULL;
}

UBaseWidget::UBaseWidget() {
}

