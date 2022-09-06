#include "OnionWidgetBlueprintLibrary.h"

class USlateBrushAsset;

bool UOnionWidgetBlueprintLibrary::IsZeroVectorRect(FVector2D PositionA, FVector2D PositionB, FVector2D PositionC, FVector2D PositionD) {
    return false;
}

bool UOnionWidgetBlueprintLibrary::IsZeroVectorArray(TArray<FVector2D> Position) {
    return false;
}

void UOnionWidgetBlueprintLibrary::DrawFillRect(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FVector2D PositionC, FVector2D PositionD, USlateBrushAsset* Brush, FLinearColor Tint) {
}

void UOnionWidgetBlueprintLibrary::ConvertLocation3DTo2D(FVector WorldLocation, FVector2D& ViewportPosition) {
}

UOnionWidgetBlueprintLibrary::UOnionWidgetBlueprintLibrary() {
}

