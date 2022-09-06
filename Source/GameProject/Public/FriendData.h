#pragma once
#include "CoreMinimal.h"
#include "FriendData.generated.h"

USTRUCT(BlueprintType)
struct FFriendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    GAMEPROJECT_API FFriendData();
};

