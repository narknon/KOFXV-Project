#pragma once
#include "CoreMinimal.h"
#include "VariousInfo.generated.h"

USTRUCT(BlueprintType)
struct FVariousInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool gayaFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool voiceChatFlag;
    
public:
    GAMEPROJECT_API FVariousInfo();
};

