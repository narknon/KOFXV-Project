#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "ECharacterID.h"
#include "ECharaColorID.h"
#include "OnSelectedCharacterDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnSelectedCharacterDispatcher, EPlayerID, PlayerID, int32, CharacterIndex, ECharacterID, CharacterID, ECharaColorID, CharaColorID, int32, CharaCostumeID);

