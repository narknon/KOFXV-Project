#pragma once
#include "CoreMinimal.h"
#include "Slate/WidgetTransform.h"
#include "UObject/NoExportTypes.h"
#include "ScaleOffsetData.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FScaleOffsetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* ScaleOffsetTargetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetTransform OriginalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetTransform MaxScaleOffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OriginalPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxScaleOffsetPivot;
    
    GAMEPROJECT_API FScaleOffsetData();
};

