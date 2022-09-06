#pragma once
#include "CoreMinimal.h"
#include "EStartRoomResult.generated.h"

UENUM(BlueprintType)
enum class EStartRoomResult : uint8 {
    Success,
    NotDisplayFailed,
    NetworkFailed,
    RoomIsFull,
    RoomDoesNotExist,
    NotInvitedUser,
    OtherFailure,
};

