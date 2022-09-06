#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "ECursorItemOnlineProfilePlayerSetting.h"
#include "EItemStateOnlineProfilePlayerSetting.h"
#include "OnlineProfile_PlayerSetting.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineProfile_PlayerSetting : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECursorItemOnlineProfilePlayerSetting CursorItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRankMatchRecordReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPersonalReplayRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isReplayWinLossDisplay;
    
public:
    UOnlineProfile_PlayerSetting();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemSettingState(ECursorItemOnlineProfilePlayerSetting Item, bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemCursorState(ECursorItemOnlineProfilePlayerSetting Item, EItemStateOnlineProfilePlayerSetting State);
    
};

