#pragma once
#include "CoreMinimal.h"
#include "ENetworkTitleID.h"
#include "ENetworkDisconnectLevel.h"
#include "ReplayUserInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountID;
    
    UPROPERTY(EditAnywhere)
    uint8 Grade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENetworkTitleID TitleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENetworkDisconnectLevel NetworkDisconnectLevel;
    
    GAMEPROJECT_API FReplayUserInfo();
};

