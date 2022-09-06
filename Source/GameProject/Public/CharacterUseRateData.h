#pragma once
#include "CoreMinimal.h"
#include "CharaUseData.h"
#include "CharacterUseRateData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterUseRateData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharaUseData> CharaUseDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharaUseData> UseCountRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUpdateRanking;
    
public:
    GAMEPROJECT_API FCharacterUseRateData();
};

