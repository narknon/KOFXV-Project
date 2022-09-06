#pragma once
#include "CoreMinimal.h"
#include "ECharacterID.h"
#include "KakeaiData.generated.h"

USTRUCT(BlueprintType)
struct FKakeaiData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterID> RivalList;
    
    GAMEPROJECT_API FKakeaiData();
};

