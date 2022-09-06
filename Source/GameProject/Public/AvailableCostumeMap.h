#pragma once
#include "CoreMinimal.h"
#include "ECostumeType.h"
#include "AvailableCostumeColor.h"
#include "AvailableCostumeMap.generated.h"

USTRUCT(BlueprintType)
struct FAvailableCostumeMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECostumeType, FAvailableCostumeColor> AvailableCostume;
    
    GAMEPROJECT_API FAvailableCostumeMap();
};

