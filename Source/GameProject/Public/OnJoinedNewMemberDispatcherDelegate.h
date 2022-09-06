#pragma once
#include "CoreMinimal.h"
#include "OnJoinedNewMemberDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinedNewMemberDispatcher, int32, NewMemberPlayerNumber);

