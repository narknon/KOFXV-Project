#pragma once
#include "CoreMinimal.h"
#include "OnlineProfileUploadData.h"
#include "OnlineProfileData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOnlineProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineProfileUploadData ProfileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AvatarTexture;
    
    GAMEPROJECT_API FOnlineProfileData();
};

