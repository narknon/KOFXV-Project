#pragma once
#include "CoreMinimal.h"
#include "EReplayListItemDataGuide.generated.h"

UENUM(BlueprintType)
enum class EReplayListItemDataGuide : uint8 {
    Download,
    PlayOrLock,
    PlayOrUnLock,
    OnlyLock,
    OnlyUnlock,
    NotDownload,
    NotPlayOrLock,
    NotOnlyLock,
    NotOnlyUnlock,
};

