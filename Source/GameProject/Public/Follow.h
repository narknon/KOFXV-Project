#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ENetworkTitleID.h"
#include "Follow.generated.h"

USTRUCT(BlueprintType)
struct FFollow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENetworkTitleID Shougou;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankmatchPoint;
    
    GAMEPROJECT_API FFollow();
};

