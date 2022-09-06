#pragma once
#include "CoreMinimal.h"
#include "MaterialStructXV.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FMaterialStructXV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> MatInst;
    
    GAMEPROJECT_API FMaterialStructXV();
};

