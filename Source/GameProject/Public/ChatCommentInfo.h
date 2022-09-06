#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESystemChatNotification.h"
#include "EChatNotificationType.h"
#include "ChatCommentInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FChatCommentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatNotificationType ChatNotificationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESystemChatNotification SystemChatNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AvaterTextrue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChatComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SendTime;
    
    GAMEPROJECT_API FChatCommentInfo();
};

