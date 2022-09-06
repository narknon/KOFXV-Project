#pragma once
#include "CoreMinimal.h"
#include "DynamicUserWidget.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FDynamicUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* UserWidgetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> SoftClassPtr;
    
    GAMEPROJECT_API FDynamicUserWidget();
};

