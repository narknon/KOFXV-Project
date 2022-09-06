#pragma once
#include "CoreMinimal.h"
#include "CharacterProfileImages.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCharacterProfileImages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ProfileTexture;
    
    GAMEPROJECT_API FCharacterProfileImages();
};

