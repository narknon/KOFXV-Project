#pragma once
#include "CoreMinimal.h"
#include "EAddGalleryNewContentsID.generated.h"

UENUM(BlueprintType)
enum class EAddGalleryNewContentsID : uint8 {
    MOVIE_PROLOGUE,
    MOVIE_EPILOGUE,
    ARTWORK_CONGRATULATION,
    SOUND_VOICE,
    SOUND_VOICE_ANNOUNCE,
    SOUND_BGM,
    MAX,
};

