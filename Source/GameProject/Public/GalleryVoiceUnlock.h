#pragma once
#include "CoreMinimal.h"
#include "GalleryVoiceUnlock.generated.h"

USTRUCT(BlueprintType)
struct FGalleryVoiceUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> VoiceUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> VoiceNew;
    
    GAMEPROJECT_API FGalleryVoiceUnlock();
};

