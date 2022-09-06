#pragma once
#include "CoreMinimal.h"
#include "EffekseerUniformProperty.generated.h"

USTRUCT(BlueprintType)
struct FEffekseerUniformProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    EFFEKSEER_API FEffekseerUniformProperty();
};

