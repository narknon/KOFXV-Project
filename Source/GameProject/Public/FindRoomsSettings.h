#pragma once
#include "CoreMinimal.h"
#include "EAreaSelect.h"
#include "EOnlineGameMode.h"
#include "EFindOptionMemberSelect.h"
#include "EFindOptionRoomMatchRule.h"
#include "EFindOptionEnableSubstitute.h"
#include "EFindOptionBattleWinRule.h"
#include "EFindOptionBattleTime.h"
#include "EFindOptionPartyFormat.h"
#include "FindRoomsSettings.generated.h"

USTRUCT(BlueprintType)
struct GAMEPROJECT_API FFindRoomsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAreaSelect AreaSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineGameMode OnlineGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFindOptionRoomMatchRule RoomMatchRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleContinuousNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFindOptionMemberSelect MemberSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFindOptionBattleTime BattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFindOptionBattleWinRule BattleWinRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFindOptionEnableSubstitute EnableSubstitute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFindOptionPartyFormat PartyFormat;
    
    FFindRoomsSettings();
};

