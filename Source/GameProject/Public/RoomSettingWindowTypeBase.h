#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "RoomSettingWindowTypeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomSettingWindowTypeBase : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    URoomSettingWindowTypeBase();
};

