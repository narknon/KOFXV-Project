#pragma once
#include "CoreMinimal.h"
#include "ECharaColorID.h"
#include "AvailableCostumeColor.generated.h"

USTRUCT(BlueprintType)
struct FAvailableCostumeColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCostumeAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharaColorID, bool> AvailableColor;
    
    GAMEPROJECT_API FAvailableCostumeColor();
};

