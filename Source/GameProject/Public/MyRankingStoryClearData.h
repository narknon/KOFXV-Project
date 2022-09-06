#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MyRankingStoryClearData.generated.h"

USTRUCT(BlueprintType)
struct FMyRankingStoryClearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID charaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SaveDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan ClearTime;
    
    GAMEPROJECT_API FMyRankingStoryClearData();
};

