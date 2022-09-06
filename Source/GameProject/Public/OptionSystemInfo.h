#pragma once
#include "CoreMinimal.h"
#include "EAnalogStickType.h"
#include "EPauseType.h"
#include "OptionSystemInfo.generated.h"

USTRUCT(BlueprintType)
struct FOptionSystemInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool vibrationFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool touchpadFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnalogStickType analogStickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPauseType pauseType;
    
public:
    GAMEPROJECT_API FOptionSystemInfo();
};

