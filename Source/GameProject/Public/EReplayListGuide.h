#pragma once
#include "CoreMinimal.h"
#include "EReplayListGuide.generated.h"

UENUM(BlueprintType)
enum class EReplayListGuide : uint8 {
    Download,
    DownloadNotFullCheck,
    NotCheckNotLocked,
    NotCheckIsLocked,
    IsCheckNotLocked,
    IsCheckIsLocked,
    FullCheckNotLocked,
    FullCheckIsLocked,
    AllNotDownload,
    NoData,
};

