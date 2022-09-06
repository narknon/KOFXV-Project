#pragma once
#include "CoreMinimal.h"
#include "RoomMenuSaveData.generated.h"

USTRUCT(BlueprintType)
struct FRoomMenuSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableNewNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableSystemNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnablePlayer1BGMCustomize;
    
    GAMEPROJECT_API FRoomMenuSaveData();
};

