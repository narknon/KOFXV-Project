#pragma once
#include "CoreMinimal.h"
#include "KeyMap.h"
#include "OptionButtonConfigInfo.generated.h"

USTRUCT(BlueprintType)
struct FOptionButtonConfigInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyMap KeyMap;
    
public:
    GAMEPROJECT_API FOptionButtonConfigInfo();
};

