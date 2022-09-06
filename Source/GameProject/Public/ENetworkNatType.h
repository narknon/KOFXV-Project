#pragma once
#include "CoreMinimal.h"
#include "ENetworkNatType.generated.h"

UENUM(BlueprintType)
enum class ENetworkNatType : uint8 {
    NETWORK_NAT_TYPE_NONE,
    NETWORK_NAT_TYPE_1,
    NETWORK_NAT_TYPE_2,
    NETWORK_NAT_TYPE_3,
    NETWORK_NAT_TYPE_MAX UMETA(Hidden),
};

