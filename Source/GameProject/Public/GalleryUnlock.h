#pragma once
#include "CoreMinimal.h"
#include "GalleryMovieUnlock.h"
#include "GalleryVoiceUnlock.h"
#include "GalleryUnlock.generated.h"

USTRUCT(BlueprintType)
struct FGalleryUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGalleryMovieUnlock GalleryMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGalleryVoiceUnlock GalleryVoice;
    
    GAMEPROJECT_API FGalleryUnlock();
};

