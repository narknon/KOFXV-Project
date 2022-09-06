#pragma once
#include "CoreMinimal.h"
#include "MovieVoiceData.generated.h"

USTRUCT(BlueprintType)
struct FMovieVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundKey;
    
    GAMEPROJECT_API FMovieVoiceData();
};

