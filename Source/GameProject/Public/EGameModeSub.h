#pragma once
#include "CoreMinimal.h"
#include "EGameModeSub.generated.h"

UENUM(BlueprintType)
enum class EGameModeSub : uint8 {
    NONE,
    DEMO_TEST_CPU_PERFORMANCE,
    DEMO_TEST_CROSS_TALK,
    DEMO_TEST_BATTLE_START,
    DEMO_TEST_WINNING_ACTION,
    DEMO_TEST_STAGE,
    DEMO_TEST_STORY,
};

