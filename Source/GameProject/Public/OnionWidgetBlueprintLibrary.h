#pragma once
#include "CoreMinimal.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OnionWidgetBlueprintLibrary.generated.h"

class USlateBrushAsset;

UCLASS(Blueprintable)
class GAMEPROJECT_API UOnionWidgetBlueprintLibrary : public UWidgetBlueprintLibrary {
    GENERATED_BODY()
public:
    UOnionWidgetBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsZeroVectorRect(FVector2D PositionA, FVector2D PositionB, FVector2D PositionC, FVector2D PositionD);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsZeroVectorArray(TArray<FVector2D> Position);
    
    UFUNCTION(BlueprintCallable)
    static void DrawFillRect(UPARAM(Ref) FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FVector2D PositionC, FVector2D PositionD, USlateBrushAsset* Brush, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertLocation3DTo2D(FVector WorldLocation, FVector2D& ViewportPosition);
    
};

