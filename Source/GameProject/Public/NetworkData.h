#pragma once
#include "CoreMinimal.h"
#include "NetworkData.generated.h"

USTRUCT(BlueprintType)
struct FNetworkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangedShougouInOffline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeRetryUpload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeTurnOffOnlineBattleFlag;
    
    GAMEPROJECT_API FNetworkData();
};

