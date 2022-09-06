#pragma once
#include "CoreMinimal.h"
#include "EMovieID.h"
#include "ECharacterID.h"
#include "SpecialEnding.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEnding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterID> TeamMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieID MovieID;
    
    GAMEPROJECT_API FSpecialEnding();
};

