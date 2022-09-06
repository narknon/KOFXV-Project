#pragma once
#include "CoreMinimal.h"
#include "EUiOperation.generated.h"

UENUM(BlueprintType)
enum class EUiOperation : uint8 {
    AnyKey,
    Dir_L,
    Dir_D,
    Dir_R,
    Dir_U,
    OK,
    Cancel,
    FuncA,
    FuncB,
    FuncX,
    FuncY,
    PageBack,
    PageNext,
    RShift,
    LShift,
    GameStart,
    TouchPad,
    Cheat,
    LStick,
    RStick,
    Option,
    Space,
    L1,
    R1,
    F1,
    MAX,
};

