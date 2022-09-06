#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "OnlineProfile_FairPlayScore.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineProfile_FairPlayScore : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UOnlineProfile_FairPlayScore();
};

