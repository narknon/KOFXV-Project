#pragma once
#include "CoreMinimal.h"
#include "GalleryMovieUnlock.generated.h"

USTRUCT(BlueprintType)
struct FGalleryMovieUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> MovieUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> MovieNew;
    
    GAMEPROJECT_API FGalleryMovieUnlock();
};

