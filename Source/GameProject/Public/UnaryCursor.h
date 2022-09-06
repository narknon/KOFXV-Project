#pragma once
#include "CoreMinimal.h"
#include "UnaryCursor.generated.h"

USTRUCT(BlueprintType)
struct FUnaryCursor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 CursorIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 CursorIndexMax;
    
    UPROPERTY(EditAnywhere)
    uint8 DefaultIndex;
    
    GAMEPROJECT_API FUnaryCursor();
};

