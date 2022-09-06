#pragma once
#include "CoreMinimal.h"
#include "EFixedPhraseItem.generated.h"

UENUM(BlueprintType)
enum class EFixedPhraseItem : uint8 {
    WatchingGames,
    Greeting,
    Question,
    Reply,
    Max,
};

