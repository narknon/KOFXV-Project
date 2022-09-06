#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENetworkDisconnectLevel.h"
#include "RankingRecord.generated.h"

UCLASS(Blueprintable)
class URankingRecord : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Nickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Country;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Shougou;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Dani;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChrIndex;
    
    UPROPERTY(EditAnywhere)
    int64 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENetworkDisconnectLevel NetworkDisconnectLevel;
    
    UPROPERTY(EditAnywhere)
    uint64 AccountID;
    
    URankingRecord();
};

