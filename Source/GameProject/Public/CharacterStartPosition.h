#pragma once
#include "CoreMinimal.h"
#include "CharacterStartPosition.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStartPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float player1XPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float player2XPos;
    
    GAMEPROJECT_API FCharacterStartPosition();
};

