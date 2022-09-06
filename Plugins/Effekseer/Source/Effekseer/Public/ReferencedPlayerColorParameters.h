#pragma once
#include "CoreMinimal.h"
#include "ReferencedPlayerColorParameters.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FReferencedPlayerColorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* OverrideTexture;
    
    EFFEKSEER_API FReferencedPlayerColorParameters();
};

